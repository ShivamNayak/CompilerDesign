%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include <ctype.h>
	#include "error.h"
	#define DEBUG_INFO 1
	#define itoa my_itoa
	int yylex(void);
	extern char* yytext;
	extern FILE* yyin;
	extern int yylineno;
	int global_scope = 0;
	int var_buffer[100];
	int var_buffer_index = 0;
	int scope_adjust = 0;
	struct entry{
		int entry_index;
		char var_name;
		int type[10];
		int scope[10];
		int line_no[10];
		int scope_array_index;
		int global_flag;
	}symbol_table[122],temp_table[122];
	
	struct value_table_entry{
		int index;
		char *value_array[10];
	}value_table[122];

	void insert_by_name(char *name);
	int found(char *name);
	void display_table(void);
	int check_for_same_scope(struct entry node1,struct entry node2);
	void check_scope_declaration(char *name);
	int check_type(char *name1,char *name2);
	int is_number(const char *s);
	void init_symbol_table(void);
	void init_value_table(void);
	void check_type_assign(char *name,int type,int scope);
	void insert_into_value_table(char *name,int scope,char *value);
	int retrieve_value(char *name,int scope);
	int min(int a,int b);
	char *my_itoa(int num, char *str);

%}

%token FOR_TOK WHILE_TOK SWITCH_TOK CASE_TOK IF_TOK ELSE_TOK BREAK_TOK DEFAULT_TOK RETURN_TOK INCLUDE_TOK DEFINE_TOK MAIN_TOK DEFAULT_TOK

%token SEMICOLON_TOK COMMA_TOK DOT_TOK LCURLY_TOK RCURLY_TOK RPAREN_TOK LPAREN_TOK ARRAY_BRACKET_LTOK ARRAY_BRACKET_RTOK

%token ADDITION_TOK INCREMENT_TOK ADDITION_EQUAL_TOK MINUS_TOK DECREMENT_TOK MINUS_EQUAL_TOK MULTIPLICATION_TOK MULTIPLICATION_EQUAL_TOK DIVISION_EQUAL_TOK DIVISION_TOK MODULO_TOK MODULO_EQUAL_TOK RIGHT_SHIFT_TOK GREATER_THAN_EQUAL_TOK GREATER_TOK LEFT_SHIFT_TOK LESS_THAN_EQUAL_TOK LESS_TOK EQUAL_COMPARE_TOK EQUAL_TOK NOT_EQUAL_TOK NOT_TOK BIT_OR_EQUAL_TOK BIT_OR_TOK OR_TOK AND_TOK BIT_AND_EQUAL_TOK BIT_AND_TOK XOR_TOK XOR_EQUAL_TOK

%token SPACE_TOK COLON_TOK ID_TOK INT_CONST_TOK COLON_TOK

%left INTEGER_TOK FLOATING_TOK DOUBLE_TOK CHAR_TOK

%union{

	struct s1{
    	int i_type;
    	char *i_val;
    }p;

	struct s2{
		char *name;
		int i_type;
		char *i_val;
	}n;

    struct s3{
    	int i_type;
    }t;
};

%type <t> data_type
%type <n> ID_TOK inline_declaration operand
%type <p> arith_expression
%start programe

%%
programe:
	function {success();}
	;

function:
	global_declaration_statement SEMICOLON_TOK function
	| data_type MAIN_TOK LPAREN_TOK main_args RPAREN_TOK statement_block
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
	} statement nested_blocks {
		global_scope -= 1;
	} RCURLY_TOK
	;

nested_blocks:
	statement_block statement nested_blocks
	|
	;

statement:
	statement actual_statement
	|
	;

actual_statement:
	declaration_statement SEMICOLON_TOK  						
	| WHILE_TOK LPAREN_TOK relational_expression RPAREN_TOK statement_block
	| FOR_TOK LPAREN_TOK declaration_statement EQUAL_TOK INT_CONST_TOK SEMICOLON_TOK relational_expression SEMICOLON_TOK unary_expression RPAREN_TOK statement_block
	| IF_TOK LPAREN_TOK relational_expression RPAREN_TOK statement_block ELSE_TOK statement_block
	| IF_TOK LPAREN_TOK relational_expression RPAREN_TOK statement_block
	| SWITCH_TOK LPAREN_TOK ID_TOK RPAREN_TOK switch_block {
		check_scope_declaration($3.name);
	}
	| assignment_expression
	;
switch_block:
	LCURLY_TOK {
		global_scope += 1;
	}case_blocks {
		global_scope -= 1;
	} RCURLY_TOK
	;
case_blocks:
	CASE_TOK INT_CONST_TOK COLON_TOK statement optional_break case_blocks
	| DEFAULT_TOK COLON_TOK statement optional_break
	|
	;
optional_break:
	BREAK_TOK SEMICOLON_TOK
	|
	;
assignment_expression:
	ID_TOK EQUAL_TOK arith_expression SEMICOLON_TOK {
		check_scope_declaration($1.name);
		check_type_assign($1.name,$3.i_type,global_scope);
		//$1.i_val = $3.i_val;
		//printf("in assignment arith exp ==> value of %s is = %d\n",$1.name,atoi($1.i_val));
		//insert_into_value_table($1.name,global_scope,$3.i_val);

	}
	| declaration_statement EQUAL_TOK INT_CONST_TOK SEMICOLON_TOK {
		printf("Declaration statement is correctly parsed at line no %d\n",yylineno);
	}
	| ID_TOK EQUAL_TOK operand SEMICOLON_TOK {
		check_scope_declaration($1.name);
		check_scope_declaration($3.name);
		check_type($1.name,$3.name);
		//$1.i_val = $3.i_val;
		//insert_into_value_table($1.name,global_scope,$3.i_val);
	}
	;

arith_expression:
	operand ADDITION_TOK operand {
		check_scope_declaration($1.name);
		check_scope_declaration($3.name);
		$$.i_type = check_type($1.name,$3.name);
		//int temp = retrieve_value($1.name,global_scope) + retrieve_value($3.name,global_scope);
		//$$.i_val = my_itoa(temp,$$.i_val);
	}														
	| operand MINUS_TOK operand {
		check_scope_declaration($1.name);
		check_scope_declaration($3.name);
		$$.i_type = check_type($1.name,$3.name);
		//int temp = retrieve_value($1.name,global_scope) - retrieve_value($3.name,global_scope);
		//$$.i_val = my_itoa(temp,$$.i_val);
	}												
	| operand MULTIPLICATION_TOK operand{
		check_scope_declaration($1.name);
		check_scope_declaration($3.name);
		$$.i_type = check_type($1.name,$3.name);
		//int temp = retrieve_value($1.name,global_scope) * retrieve_value($3.name,global_scope);
		//$$.i_val = my_itoa(temp,$$.i_val);
	} 												
	| operand DIVISION_TOK operand {
		check_scope_declaration($1.name);
		check_scope_declaration($3.name);
		$$.i_type = check_type($1.name,$3.name);
		//int temp = retrieve_value($1.name,global_scope) / retrieve_value($3.name,global_scope);
		//$$.i_val = my_itoa(temp,$$.i_val);
	}													
	| operand MODULO_TOK operand 	{
		check_scope_declaration($1.name);
		check_scope_declaration($3.name);
		$$.i_type = check_type($1.name,$3.name);
		//int temp = retrieve_value($1.name,global_scope) % retrieve_value($3.name,global_scope);
		//$$.i_val = my_itoa(temp,$$.i_val);
	}												
	| operand RIGHT_SHIFT_TOK operand{
		check_scope_declaration($1.name);
		check_scope_declaration($3.name);
		$$.i_type = check_type($1.name,$3.name);
		//int temp = retrieve_value($1.name,global_scope) >> retrieve_value($3.name,global_scope);
		//$$.i_val = my_itoa(temp,$$.i_val);
	}																
	| operand LEFT_SHIFT_TOK operand {
		check_scope_declaration($1.name);
		check_scope_declaration($3.name);
		$$.i_type = check_type($1.name,$3.name);
		//int temp = retrieve_value($1.name,global_scope) << retrieve_value($3.name,global_scope);
		//$$.i_val = my_itoa(temp,$$.i_val);
	}																
	| operand BIT_OR_TOK operand 	{
		check_scope_declaration($1.name);
		check_scope_declaration($3.name);
		$$.i_type = check_type($1.name,$3.name);
		//int temp = retrieve_value($1.name,global_scope) | retrieve_value($3.name,global_scope);
		//$$.i_val = my_itoa(temp,$$.i_val);
	}													
	| operand BIT_AND_TOK operand 	{
		check_scope_declaration($1.name);
		check_scope_declaration($3.name);
		$$.i_type = check_type($1.name,$3.name);
		//int temp = retrieve_value($1.name,global_scope) + retrieve_value($3.name,global_scope);
		//$$.i_val = my_itoa(temp,$$.i_val);
	}													
	| LPAREN_TOK arith_expression RPAREN_TOK {}           			
	;

relational_expression:
	operand {check_scope_declaration($1.name);}
	| operand GREATER_THAN_EQUAL_TOK operand {check_scope_declaration($1.name);}  	
	| operand GREATER_TOK operand 	{check_scope_declaration($1.name);}			
	| operand LESS_THAN_EQUAL_TOK operand {check_scope_declaration($1.name);}		
	| operand LESS_TOK operand 	{check_scope_declaration($1.name);}				
	| operand EQUAL_COMPARE_TOK operand {check_scope_declaration($1.name);}			
	| operand NOT_EQUAL_TOK operand 	{check_scope_declaration($1.name);}			
	| LPAREN_TOK relational_expression RPAREN_TOK       					
	;

unary_expression:
	ID_TOK INCREMENT_TOK {check_scope_declaration($1.name);} 		
	| ID_TOK DECREMENT_TOK {check_scope_declaration($1.name);}		
	| INCREMENT_TOK ID_TOK {check_scope_declaration($2.name);}		
	| DECREMENT_TOK ID_TOK {check_scope_declaration($2.name);}		
	;

operand:
	ID_TOK {}
	| INT_CONST_TOK {}
	;

global_declaration_statement:
	data_type inline_declaration {
		assign_type($1.i_type,1);
	}
	;

declaration_statement:
	data_type inline_declaration {
		assign_type($1.i_type,0);
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
	init_value_table();
	yyin = fopen(argv[1],"r");
	yyparse();
	printf("node size is: %ld\n",sizeof(symbol_table[0]));
	return 0;
}
void success(void){
	display_table();
	printf("\n\n\t\t\tSUCCESSFULLY PARSED :)\n");
}
void yyerror(char *s){
	printf("SORRY SOME SYNTAX ERROR IS THERE IN LINE ........ :( . THE MESSEGE: %s\n",s);
	for(int i = 0; i < REASON ; i++){
		printf ("%s\n",error_reason[i]);
	}
	display_table();
	exit(1);
}
void init_symbol_table(void){
	for(int i=0;i <= 122;i++){
		symbol_table[i].entry_index = -1;
	}
}
void init_value_table(void){
	for(int i=0;i <= 122;i++){
		value_table[i].index = -1;
	}
}
void insert_by_name(char *name){

	int index = name[0];
	temp_table[index].entry_index = index;
	temp_table[index].var_name = name[0];
	memset((void*)temp_table[index].type,-1,sizeof(int)*10);
	temp_table[index].scope[0] = global_scope;
	temp_table[index].line_no[0] = yylineno;
	temp_table[index].scope_array_index = 0;
}
void assign_type(int t,int flag){
	if(DEBUG_INFO){
		printf("Current scope in assign_type is: %d in line_no: %d\n",global_scope,yylineno);
	}
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
					symbol_table[element].line_no[global_scope] = yylineno;
					symbol_table[element].scope_array_index++;
					if(flag == 0 && symbol_table[element].global_flag != 1){
						symbol_table[element].global_flag = 0;
					}
					else{
						symbol_table[element].global_flag = 1;
					}
				}
			}
			else{
					int element = var_buffer[i];
					symbol_table[element].entry_index = element;
					symbol_table[element].var_name = temp_table[element].var_name;
					symbol_table[element].scope[symbol_table[element].scope_array_index] = global_scope;
					symbol_table[element].type[global_scope] = t;
					symbol_table[element].line_no[global_scope] = yylineno;
					symbol_table[element].scope_array_index++;
					if(flag == 0 && symbol_table[element].global_flag != 1){
						symbol_table[element].global_flag = 0;
					}
					else{
						symbol_table[element].global_flag = 1;
					}
			}
		}
		var_buffer[i] = -1;
	}
}
int check_for_same_scope(struct entry node1,struct entry node2){
	if(DEBUG_INFO){
		printf("Current scope in check_for_same_scope is:  %d in line_no: %d\n",global_scope,yylineno);
	}
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
	printf("\t\t\t%s\n\n","SYMBOL TABLE BUILT SO FAR");
	printf("----------------------------------------------------------------------------------------------------\n");
	for(int i=0;i <= 122;i++){
		if(symbol_table[i].entry_index != -1){
			for(int j=0;j < symbol_table[i].scope_array_index;j++){
				printf("| index: %d name: %c total_of_scope_used: %d type = %d in the scope %d line_no: %d global_flag: %d\t   |\n",symbol_table[i].entry_index,symbol_table[i].var_name,symbol_table[i].scope_array_index,symbol_table[i].type[symbol_table[i].scope[j]],symbol_table[i].scope[j],symbol_table[i].line_no[symbol_table[i].scope[j]],symbol_table[i].global_flag);
			}
			printf("----------------------------------------------------------------------------------------------------\n");
		}
	}
	/*
	printf("\t\t\t%s\n\n","VALUE TABLE BUILT SO FAR");
	printf("----------------------------------------------------------------------------------------------------\n");
	for(int i=0;i <= 122;i++){
		if(value_table[i].index != -1){
			for(int j=0;j < symbol_table[i].scope_array_index;j++){
				printf("| index: %d total_of_scope_used: %d value = %s in the scope %d\t   |\n",value_table[i].index,symbol_table[i].scope_array_index,value_table[i].value_array[symbol_table[i].scope[j]],symbol_table[i].scope[j]);
			}
			printf("----------------------------------------------------------------------------------------------------\n");
		}
	}
	*/
}
void check_scope_declaration(char *name){
	if(DEBUG_INFO){
		printf("Current scope in check_scope_declaration for %s is:  %d in line no: %d\n",name,global_scope,yylineno);
	}
	if(found(name)){
		return;
	}
	yyerror("Un-declared till now");
}
int found(char *name){
	return symbol_table[name[0]].entry_index != -1  || strlen(name) > 1 || is_number(name);
}
int  check_type(char *name1,char *name2){
	if(DEBUG_INFO){
		printf("Current scope in check_type for %s %s is: %d in line_no: %d\n",name1,name2,global_scope,yylineno);
	}
	if (strlen(name1) == 1 && strlen(name2) == 1 && !is_number(name2)){
		for(int i = 0; i < symbol_table[name1[0]].scope_array_index;i++){
			for(int j = 0; j < symbol_table[name2[0]].scope_array_index;j++){
				if (symbol_table[name1[0]].type[symbol_table[name1[0]].scope[i]] == symbol_table[name2[0]].type[symbol_table[name2[0]].scope[j]] && symbol_table[name1[0]].type[symbol_table[name1[0]].scope[i]] != 0 )
					return symbol_table[(int)name1[0]].type[symbol_table[(int)name1[0]].scope[i]];
			}
		}
		printf("%s === %s\n",name1,name2);
		yyerror("Mismatched Type");
	}
	else if(strlen(name1) == 1){
		if (is_number(name2)){
			for(int i = 0;i < symbol_table[name1[0]].scope_array_index;i++){
				if(symbol_table[name1[0]].type[symbol_table[name1[0]].scope[i]] == 1){
					return 1;
				}
			}
			yyerror("Integer type not found");
		}
		yyerror("String is not allowed");
	}
	else if(strlen(name2) == 1){
		if(is_number(name1)){
			for(int i = 0;i < symbol_table[name2[0]].scope_array_index;i++){
				if(symbol_table[name2[0]].type[symbol_table[name2[0]].scope[i]] == 1){
					return 1;
				}
			}
			yyerror("Integer type not found");
		}
		yyerror("String is not allowed");
	}
	else{
		if(is_number(name1) && is_number(name2)){
			return 1;
		}
		yyerror("Un recognised type of two variables");
	}

}
void check_type_assign(char *name,int type,int scope){
	if(DEBUG_INFO){
		printf("Current scope in check_type_assign is: %d in lineno: %d\n",global_scope,yylineno);
	}
	for(int i = 0;i < symbol_table[name[0]].scope_array_index;i++){
		if(symbol_table[name[0]].type[symbol_table[name[0]].scope[i]] == type){
			return;
		}
	}
	yyerror("Mismatched type of LHS and RHS");
}
int min(int a,int b){
	if (a > b)
		return b;
	return a;
}
int is_number(const char *s)
{
    while (*s) {
        if (isdigit(*s++) == 0) return 0;
    }
    return 1;
}
char *my_itoa(int num, char *str)
{
	str = (char*)malloc(sizeof(char) * 20);
	sprintf(str, "%d", num);
	return str;
}
void insert_into_value_table(char *name,int scope,char *value){
	value_table[name[0]].index = name[0];
	if(value_table[name[0]].value_array[scope] == NULL){
		value_table[name[0]].value_array[scope] = (char*)malloc(sizeof(char) * strlen(value) + 1);
		strncpy(value_table[name[0]].value_array[scope],value,strlen(value));
		printf("New value with new scope will be inserted\n");
	}
	else{
		printf("VARIABLE VALUE WILL BE UPDATED TO ->  %s\n",value);
		free(value_table[name[0]].value_array[scope]);
		value_table[name[0]].value_array[scope] = (char*)malloc(sizeof(char) * strlen(value) + 1);
		strncpy(value_table[name[0]].value_array[scope],value,strlen(value));
	}
	return;
}
int retrieve_value(char *name,int scope){
	if (is_number(name)){
		return atoi(name);
	}
	if (value_table[name[0]].value_array[scope] == NULL){
		int i = scope;
		while (value_table[name[0]].value_array[i] == NULL){
			i--;
		}
		return atoi(value_table[name[0]].value_array[i]);
	}
	return atoi(value_table[name[0]].value_array[scope]);
}