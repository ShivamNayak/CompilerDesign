%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	int MAX_TEMP_VAR = 20;
	int temp_var_index = 1;
	char temp[2];
	extern FILE* yyin;
	int yylex(void);
	void reset_temp(void);
	void yyerror(char *s);
	extern int yylineno;
	char* gencode(char *var1,char op,char *var2);
	int label = 1;
%}

%union{
	struct custom_type{
		int i_type;
		char *i_name;
		char *i_val;
	}A;	
}

%token ID_TOK INT_CONST_TOK SEMICOLON_TOK LPAREN_TOK RPAREN_TOK MAIN_TOK COMMA_TOK LCURLY_TOK RCURLY_TOK IF_TOK ELSE_TOK
%left ADDITION_TOK MINUS_TOK
%left MULTIPLICATION_TOK DIVISION_TOK MODULO_TOK
%left UNARY_MINUS_CONST_TOK
%right EQUAL_TOK 
%left INTEGER_TOK FLOATING_TOK DOUBLE_TOK CHAR_TOK  
%left LESS_TOK LESS_THAN_EQUAL_TOK
%left GREATER_TOK GREATER_THAN_EQUAL_TOK
%left EQUAL_COMPARE_TOK NOT_EQUAL_TOK
%nonassoc UMINUS_TOK
 
%type <A> arith_expression ID_TOK INT_CONST_TOK statement data_type assignment_expression operand
%start programe
%%
	programe:
		function {printf("Successfully parsed\n");}
	;
	function:
		data_type MAIN_TOK LPAREN_TOK func_args RPAREN_TOK statement_block function_declr {}

	function_declr:
		data_type ID_TOK LPAREN_TOK func_args RPAREN_TOK statement_block function_declr {}
		|
		;
	func_args:
		func_args COMMA_TOK data_type ID_TOK {}
		| data_type ID_TOK {}
		;
	data_type:
		INTEGER_TOK {$$.i_type = 1;}
		| FLOATING_TOK {$$.i_type = 2; }
		| DOUBLE_TOK {$$.i_type = 3; }
		| CHAR_TOK {$$.i_type = 4; }
		;
	statement_block:
		LCURLY_TOK statement nested_blocks RCURLY_TOK {}
		;
	nested_blocks:
		statement_block statement nested_blocks {}
		|
		;

	statement:
		statement actual_statement {}
		|
		;
	actual_statement:
		assignment_expression {}
		| IF_TOK LPAREN_TOK relational_expression RPAREN_TOK {printf("GOTO_LABEL(IF): %d\n",label);}statement_block ELSE_TOK  {printf("GOTO_LABEL(ELSE): %d\n",label);}statement_block
		;
	assignment_expression:
		ID_TOK EQUAL_TOK arith_expression SEMICOLON_TOK {
			strcpy($1.i_name,$3.i_name);
			strcpy($$.i_name,$3.i_name);
		}
	;
	arith_expression:
		operand {$$ = $1;}
		| arith_expression ADDITION_TOK arith_expression{
			reset_temp();
			strcpy($$.i_name,gencode($1.i_name,'+',$3.i_name));
		} 
		| arith_expression MINUS_TOK arith_expression{
			reset_temp();
			strcpy($$.i_name,gencode($1.i_name,'-',$3.i_name));
		}
		| arith_expression MULTIPLICATION_TOK arith_expression	{
			reset_temp();
			strcpy($$.i_name,gencode($1.i_name,'*',$3.i_name));
		}
		| arith_expression DIVISION_TOK arith_expression{
			reset_temp();
			strcpy($$.i_name,gencode($1.i_name,'/',$3.i_name));
		}
		| arith_expression MODULO_TOK arith_expression{
			reset_temp();
			strcpy($$.i_name,gencode($1.i_name,'%',$3.i_name));
		}
		| LPAREN_TOK arith_expression RPAREN_TOK {$$ = $2;}
		| MINUS_TOK arith_expression {$$ = $2;} %prec UMINUS_TOK
		;

	relational_expression:
		operand
		| operand LESS_THAN_EQUAL_TOK operand
		| operand LESS_TOK operand
		| operand GREATER_THAN_EQUAL_TOK operand
		| operand GREATER_TOK operand
		| operand EQUAL_COMPARE_TOK operand
		| operand NOT_EQUAL_TOK operand
		| arith_expression LESS_THAN_EQUAL_TOK operand
		;
	operand:
		ID_TOK {strcpy($$.i_name,$1.i_name);}
		| INT_CONST_TOK {strcpy($$.i_name,$1.i_name);}
		;
%%
int main(int argc,const char* argv[]){
	yyin = fopen(argv[1],"r");
	yyparse();
	return 1;
}
void yyerror(char *s){
	printf("Error: %s in lineno: %d\n",s,yylineno);
}
char* gencode(char *var1,char op,char *var2){
	printf("Label: %d --> var1: %s, var2: %s, operation: %c\n",label,var1,var2,op);
	char t[MAX_TEMP_VAR];
	sprintf(t,"%d",temp_var_index);
	temp_var_index++;
	strcat(temp,t);
	label++;
	return temp;
}
void reset_temp(void){
	temp[0] = 't';
	temp[1] = '\0';
}