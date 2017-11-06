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
	char* gencode(char *var1,char op,char *var2);
%}

%union{
	struct custom_type{
		int i_type;
		char *i_name;
		char *i_val;
	}A;	
}

%token ID_TOK INT_CONST_TOK SEMICOLON_TOK LPAREN_TOK RPAREN_TOK
%left ADDITION_TOK MINUS_TOK
%left MULTIPLICATION_TOK DIVISION_TOK MODULO_TOK
%left UNARY_MINUS_CONST_TOK
%right EQUAL_TOK 
%nonassoc UMINUS_TOK

%type <A> arith_expression ID_TOK INT_CONST_TOK statement 
%start programme
%%
	programme:
		start {printf("Successfully parsed\n");}
	;
	start:
		start statement {}
		|
		;
	statement:
		ID_TOK EQUAL_TOK arith_expression {
			printf("statement correctly parsed\n");
			strcpy($1.i_name,$3.i_name);
			printf("Id name: %s\n",$1.i_name);
		}
	;
	arith_expression:
		ID_TOK {$$ = $1;}
		| INT_CONST_TOK {$$ = $1;}
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
%%
int main(int argc,const char* argv[]){
	yyin = fopen(argv[1],"r");
	yyparse();
	return 1;
}
void yyerror(char *s){
	printf("Error: %s\n",s);
}
char* gencode(char *var1,char op,char *var2){
	printf("var1: %s, var2: %s, operation: %c\n",var1,var2,op);
	char t[MAX_TEMP_VAR];
	sprintf(t,"%d",temp_var_index);
	temp_var_index++;
	printf("t = %s\n",t);
	printf("temp = %s\n",temp);
	strcat(temp,t);
	printf("temp_var = %s\n",temp);
	return temp;
}
void reset_temp(void){
	temp[0] = 't';
	temp[1] = '\0';
}