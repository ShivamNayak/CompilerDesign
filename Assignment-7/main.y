%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#define UNINITIALISED_TYPE -1
	int yylex(void);
	extern char* yytext;
	extern FILE* yyin;
	extern int yylineno;
	struct entry{
		int entry_index;
		char var_name;
		int type[10];
		int scope[10];
		int line_no;
		int scope_array_index;
	}symbol_table[122],temp_table[122];

	void insert_by_name(char *name);
	int found(char name[]);
	void display_table(void);
	int check_for_same_scope(struct entry node1,struct entry node2);
	int global_scope = 0;
	int var_buffer[100]; // max 100 inline var be declared at a time;
	int var_buffer_index = 0;
	void init_symbol_table(void);
%}

%token FOR_TOK WHILE_TOK SWITCH_TOK CASE_TOK IF_TOK ELSE_TOK BREAK_TOK DEFAULT_TOK RETURN_TOK INCLUDE_TOK DEFINE_TOK MAIN_TOK DEFAULT_TOK

%token SEMICOLON_TOK COMMA_TOK DOT_TOK LCURLY_TOK RCURLY_TOK RPAREN_TOK LPAREN_TOK ARRAY_BRACKET_LTOK ARRAY_BRACKET_RTOK

%token ADDITION_TOK INCREMENT_TOK ADDITION_EQUAL_TOK MINUS_TOK DECREMENT_TOK MINUS_EQUAL_TOK MULTIPLICATION_TOK MULTIPLICATION_EQUAL_TOK DIVISION_EQUAL_TOK DIVISION_TOK MODULO_TOK MODULO_EQUAL_TOK RIGHT_SHIFT_TOK GREATER_THAN_EQUAL_TOK GREATER_TOK LEFT_SHIFT_TOK LESS_THAN_EQUAL_TOK LESS_TOK EQUAL_COMPARE_TOK EQUAL_TOK NOT_EQUAL_TOK NOT_TOK BIT_OR_EQUAL_TOK BIT_OR_TOK OR_TOK AND_TOK BIT_AND_EQUAL_TOK BIT_AND_TOK XOR_TOK XOR_EQUAL_TOK

%token SPACE_TOK COLON_TOK ID_TOK INT_CONST_TOK COLON_TOK 

%left INTEGER_TOK FLOATING_TOK DOUBLE_TOK CHAR_TOK 

%union{
	struct s2{
		char *name;
	}n;

    struct s3{
    	int i_type;
    }t;
};

%type <t> data_type
%type <n> ID_TOK inline_declaration
%start programe

%%
programe:
	function {success();}
	;

function:
	data_type MAIN_TOK LPAREN_TOK main_args RPAREN_TOK statement_block {
		printf("%s = %d and scope = %d\n","main function has been found and its return type is",$1.i_type,global_scope);
	}
	|
	;
main_args:
	main_args COMMA_TOK data_type ID_TOK
	| data_type ID_TOK
	;
data_type:
	INTEGER_TOK {$$.i_type = 1;}
	| FLOATING_TOK {$$.i_type = 2; } 
	| DOUBLE_TOK {$$.i_type = 3; }
	| CHAR_TOK {$$.i_type = 4; } 
	;
statement_block:
	LCURLY_TOK {
		global_scope += 1;
	} statement nested_blocks RCURLY_TOK
	;
nested_blocks:
	statement_block {
		global_scope -= 1;
	} statement nested_blocks
	|
	;
statement:
	statement actual_statement
	|
	;

actual_statement:
	declaration_statement SEMICOLON_TOK 
	;


declaration_statement:
	data_type inline_declaration {
		assign_type($1.i_type);
	}
	;
inline_declaration:
	inline_declaration COMMA_TOK ID_TOK {
		insert_by_name($3.name);
		var_buffer[var_buffer_index++] = $3.name[0];
	}
	| ID_TOK{
		insert_by_name($1.name);
		var_buffer[var_buffer_index++] = $1.name[0];
	}
	;
%%

int main(int argc,const char* argv[]){
	init_symbol_table();
	yyin = fopen(argv[1],"r");
	yyparse();
	return 0;
}
void success(void){
	printf("successfully parsed :)\n");
	display_table();
}
void yyerror(char *s){
	printf("SORRY some syntax error is there. ........ :( . The message: %s\n",s);
	exit(1);
}
void init_symbol_table(void){
	for(int i=0;i <= 122;i++){
		symbol_table[i].entry_index = -1;
	}
}
void insert_by_name(char *name){

	/* store them into temp table*/
	printf(" index: %d, name: %s, scope: %d, line_no: %d\n",name[0],name,global_scope,yylineno);
	int index = name[0];
	temp_table[index].entry_index = index;
	temp_table[index].var_name = name[0];
	memset((void*)temp_table[index].type,-1,sizeof(int)*10);
	temp_table[index].scope[0] = global_scope;
	temp_table[index].line_no = yylineno;
	temp_table[index].scope_array_index = 0;
}
void assign_type(int t){
	/* check for re_decleration and make var_buffer empty*/
	struct entry node;
	for(int i = 0;i < var_buffer_index;i++){
		if(var_buffer[i] >= 0){
			node = symbol_table[var_buffer[i]];
			if(node.var_name == temp_table[var_buffer[i]].var_name){
				if(check_for_same_scope(node,temp_table[var_buffer[i]])){
					yyerror("Variable having same name with same scope");
				}
				else{
					int element = var_buffer[i];
					symbol_table[element].entry_index = element;
					symbol_table[element].var_name = temp_table[element].var_name;
					symbol_table[element].scope[symbol_table[element].scope_array_index] = global_scope;
					symbol_table[element].type[global_scope] = t;
					symbol_table[element].line_no = yylineno;
					symbol_table[element].scope_array_index++;
				}
			}
			else{
					int element = var_buffer[i];
					symbol_table[element].entry_index = element;
					symbol_table[element].var_name = temp_table[element].var_name;
					symbol_table[element].scope[symbol_table[element].scope_array_index] = global_scope;
					symbol_table[element].type[global_scope] = t;
					symbol_table[element].line_no = yylineno;
					symbol_table[element].scope_array_index++;	
			}
		}
		var_buffer[i] = -1;
	}
}
int check_for_same_scope(struct entry node1,struct entry node2){
		/* same scope with same of different data type */
		if (node1.entry_index == -1){
			return 0;
		}
		else{
			int target_scope = node2.scope[0];
			for(int i = 0;i < node1.scope_array_index;i++){
				if(node1.scope[i] == target_scope){
					return 1;
				}
			}
			return 0;
		}
}
void display_table(void){
	for(int i=0;i <= 122;i++){
		if(symbol_table[i].entry_index != -1){
			for(int j=0;j < symbol_table[i].scope_array_index;j++){
				printf("entry_index: %d\tname: %c\ttotal_of_scope_used: %d\ttype = %d in the scope %d\n",symbol_table[i].entry_index,symbol_table[i].var_name,symbol_table[i].scope_array_index,symbol_table[i].type[symbol_table[i].scope[j]],symbol_table[i].scope[j]);
			}
			printf("----------------------------------------------------\n");
		}
	}
}