%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <stdarg.h>
	extern FILE *yyin;
	#define YYDEBUG 0
	void yyerror(char *s);
	int yylex(void);
	void success(void);	

%}

%token FOR_TOK WHILE_TOK SWITCH_TOK CASE_TOK IF_TOK ELSE_TOK INTEGER_TOK FLOATING_TOK DOUBLE_TOK CHAR_TOK BREAK_TOK DEFAULT_TOK RETURN_TOK INCLUDE_TOK DEFINE_TOK MAIN_TOK

%token SEMICOLON_TOK COMMA_TOK DOT_TOK LCURLY_TOK RCURLY_TOK RPAREN_TOK LPAREN_TOK ARRAY_BRACKET_LTOK ARRAY_BRACKET_RTOK

%token ADDITION_TOK INCREMENT_TOK ADDITION_EQUAL_TOK MINUS_TOK DECREMENT_TOK MINUS_EQUAL_TOK MULTIPLICATION_TOK MULTIPLICATION_EQUAL_TOK DIVISION_EQUAL_TOK DIVISION_TOK MODULO_TOK MODULO_EQUAL_TOK RIGHT_SHIFT_TOK GREATER_THAN_EQUAL_TOK GREATER_TOK LEFT_SHIFT_TOK LESS_THAN_EQUAL_TOK LESS_TOK EQUAL_COMPARE_TOK EQUAL_TOK NOT_EQUAL_TOK NOT_TOK BIT_OR_EQUAL_TOK BIT_OR_TOK OR_TOK AND_TOK BIT_AND_EQUAL_TOK BIT_AND_TOK XOR_TOK XOR_EQUAL_TOK

%token SPACE_TOK COLON_TOK ID_TOK INT_CONST_TOK COLON_TOK
%%
programe:
	function {success();}
	;

function:
	function statement
	|
	;

statement:
	SEMICOLON_TOK
	| expression SEMICOLON_TOK
	| reserved_word balanced_paran 		/* bug for(..); and while(..);*/
	| IF_TOK LPAREN_TOK relational_expression RPAREN_TOK balanced_paran ELSE_TOK balanced_paran  // if(..){...}else{..}
	| SWITCH_TOK LPAREN_TOK ID_TOK RPAREN_TOK LCURLY_TOK case_blocks RCURLY_TOK		   // switch(c){ case ... }
	| INTEGER_TOK MAIN_TOK LPAREN_TOK main_args RPAREN_TOK balanced_paran			   // int main(...){ ... }
	| INTEGER_TOK ID_TOK LPAREN_TOK function_args RPAREN_TOK balanced_paran 		   // int func(...){ ... }
	| FLOATING_TOK ID_TOK LPAREN_TOK function_args RPAREN_TOK balanced_paran 		   // int func(...){ ... }
	| DOUBLE_TOK ID_TOK LPAREN_TOK function_args RPAREN_TOK balanced_paran 		       // int func(...){ ... }
	| CHAR_TOK ID_TOK LPAREN_TOK function_args RPAREN_TOK balanced_paran 		       // int func(... ","){ ... }
	;

main_args:
	INTEGER_TOK ID_TOK COMMA_TOK CHAR_TOK MULTIPLICATION_TOK ID_TOK ARRAY_BRACKET_LTOK ARRAY_BRACKET_RTOK
	|
	;

function_args:
	SEMICOLON_TOK
	| int_arg
	| float_arg
	| double_arg
	| char_arg
	| int_arg COMMA_TOK function_args
	| float_arg COMMA_TOK function_args
	| double_arg COMMA_TOK function_args
	| char_arg COMMA_TOK function_args
	|
	;

int_arg:
	INTEGER_TOK ID_TOK 	
	;

float_arg:
	FLOATING_TOK ID_TOK 
	;

double_arg:
	DOUBLE_TOK ID_TOK 
	;

char_arg:
	CHAR_TOK ID_TOK 
	;
balanced_paran:
	LCURLY_TOK nested_statement RCURLY_TOK
	;

nested_statement:
	statement nested_statement
	|
	;

expression:
	INTEGER_TOK ID_TOK 														// int a
	| FLOATING_TOK ID_TOK 													// float a
	| DOUBLE_TOK ID_TOK 													// double a
	| CHAR_TOK ID_TOK 														// char a
	| ID_TOK 																// a
	| INT_CONST_TOK 														// 2
	| INTEGER_TOK assignment_expression										// int a=2;
	| INTEGER_TOK assignment_expression COMMA_TOK assignment_expression	    // int a=2,b=6;
	| assignment_expression 												// a = 2 or a = b
	| ID_TOK EQUAL_TOK arith_expression 									// a = arith_exp
	| relational_expression 												// a >,<,>=,<=,== b or 2
	| unary_expression														// a++,++a,a--,--a
	| ID_TOK EQUAL_TOK logic_expression 									// a = a||a , a&&a, a^a, !a
	| logic_expression 														// a||a , a&&a , a^a
	| func_call 															// void function()
	| ID_TOK assignment_expression 											// a = func()
	;

arith_expression:  							
	ID_TOK ADDITION_TOK ID_TOK 							//	a+a
	| ID_TOK MINUS_TOK ID_TOK 							//	a-a
	| ID_TOK MULTIPLICATION_TOK ID_TOK 					//	a*a
	| ID_TOK DIVISION_TOK ID_TOK 						// 	a/a
	| ID_TOK MODULO_TOK ID_TOK 							//	a%a
	| ID_TOK ADDITION_TOK INT_CONST_TOK 				//	a+2
	| ID_TOK MINUS_TOK INT_CONST_TOK 					//	a-2
	| ID_TOK MULTIPLICATION_TOK INT_CONST_TOK 			//	a*2
	| ID_TOK DIVISION_TOK INT_CONST_TOK 				// 	a/2
	| ID_TOK MODULO_TOK INT_CONST_TOK 					//	a%2
	| ID_TOK RIGHT_SHIFT_TOK ID_TOK 					// 	a >> a
	| ID_TOK LEFT_SHIFT_TOK ID_TOK 						// 	a << a
	| ID_TOK RIGHT_SHIFT_TOK INT_CONST_TOK 				// 	a >> 2
	| ID_TOK LEFT_SHIFT_TOK INT_CONST_TOK 				// 	a << 2
	| ID_TOK ADDITION_EQUAL_TOK ID_TOK 					// 	a += a
	| ID_TOK BIT_OR_TOK ID_TOK 							// 	a|b
	| ID_TOK BIT_AND_TOK ID_TOK 						// 	a&b
	| ID_TOK BIT_OR_TOK INT_CONST_TOK 					// 	a|2
	| ID_TOK BIT_AND_TOK INT_CONST_TOK 					// 	a&2
	;

relational_expression:
	ID_TOK GREATER_THAN_EQUAL_TOK ID_TOK   				// a >= a
	| ID_TOK GREATER_TOK ID_TOK 						// a > a
	| ID_TOK LESS_THAN_EQUAL_TOK ID_TOK 				// a <= a
	| ID_TOK LESS_TOK ID_TOK 							// a < a
	| ID_TOK GREATER_THAN_EQUAL_TOK INT_CONST_TOK 		// a >= 2
	| ID_TOK GREATER_TOK INT_CONST_TOK 					// a > 2
	| ID_TOK LESS_THAN_EQUAL_TOK INT_CONST_TOK 			// a <= 2
	| ID_TOK LESS_TOK INT_CONST_TOK 					// a < 2
	| ID_TOK EQUAL_COMPARE_TOK ID_TOK 					// a == b
	| ID_TOK EQUAL_COMPARE_TOK INT_CONST_TOK 			// a == 1
	| ID_TOK NOT_EQUAL_TOK ID_TOK 						// a != b
	| ID_TOK NOT_EQUAL_TOK INT_CONST_TOK 				// a != 2
	;

unary_expression:
	ID_TOK INCREMENT_TOK 								// a++
	| ID_TOK DECREMENT_TOK 								// a--
	| INCREMENT_TOK ID_TOK 								// ++a
	| DECREMENT_TOK ID_TOK 								// --a
	;

logic_expression:
	ID_TOK OR_TOK ID_TOK 								// a || a
	| ID_TOK AND_TOK ID_TOK 							// a && a
	| ID_TOK XOR_TOK ID_TOK 							// a ^ a
	| ID_TOK OR_TOK INT_CONST_TOK 						// a || 2
	| ID_TOK AND_TOK INT_CONST_TOK 						// a && 2
	| ID_TOK XOR_TOK INT_CONST_TOK 						// a ^ 2
	| NOT_TOK ID_TOK 									// !a
	;

assignment_expression:
	ID_TOK EQUAL_TOK ID_TOK 							//  a = b
	| ID_TOK EQUAL_TOK INT_CONST_TOK 					//  a = 2
	| ID_TOK ADDITION_EQUAL_TOK INT_CONST_TOK 			// 	a += 2
	| ID_TOK MINUS_EQUAL_TOK ID_TOK 					// 	a -= b
	| ID_TOK MINUS_EQUAL_TOK INT_CONST_TOK 				// 	a -= 2
	| ID_TOK MULTIPLICATION_EQUAL_TOK ID_TOK 			// 	a *= a
	| ID_TOK MULTIPLICATION_EQUAL_TOK INT_CONST_TOK 	// 	a *= 2
	| ID_TOK DIVISION_EQUAL_TOK ID_TOK 					// 	a /= b
	| ID_TOK DIVISION_EQUAL_TOK INT_CONST_TOK 			// 	a /= 2
	| ID_TOK MODULO_EQUAL_TOK ID_TOK 					// 	a %= b
	| ID_TOK MODULO_EQUAL_TOK INT_CONST_TOK 			// 	a %= 2
	| ID_TOK BIT_OR_EQUAL_TOK ID_TOK 					// 	a |= b
	| ID_TOK BIT_AND_EQUAL_TOK ID_TOK 					// 	a &= b
	| ID_TOK BIT_OR_EQUAL_TOK INT_CONST_TOK 			// 	a |= 2
	| ID_TOK BIT_AND_EQUAL_TOK INT_CONST_TOK 			// 	a &= 2
	| ID_TOK XOR_EQUAL_TOK ID_TOK 						//  a ^= b
	| ID_TOK XOR_EQUAL_TOK INT_CONST_TOK 				// 	a ^= 2
	| ID_TOK EQUAL_TOK func_call 						// a = func()
	; 

reserved_word:
	FOR_TOK LPAREN_TOK INTEGER_TOK ID_TOK EQUAL_TOK INT_CONST_TOK SEMICOLON_TOK relational_expression SEMICOLON_TOK unary_expression RPAREN_TOK
	| WHILE_TOK LPAREN_TOK relational_expression RPAREN_TOK
//	| SWITCH_TOK LPAREN_TOK ID_TOK RPAREN_TOK LCURLY_TOK case_blocks RCURLY_TOK
	;

case_blocks:
	CASE_TOK INT_CONST_TOK COLON_TOK nested_statement BREAK_TOK SEMICOLON_TOK case_blocks
	|
	;

func_call:
	ID_TOK LPAREN_TOK call_args RPAREN_TOK
	;

call_args:
	SEMICOLON_TOK
	| ID_TOK
	| ID_TOK COMMA_TOK call_args
	| 
	;
%%

int main(int argc,char *argv[]){
	#if YYDEBUG
		yydebug = 1;
	#endif
	if (argc == 2){
		yyin = fopen(argv[1],"r");
	}
	yyparse();
	fclose(yyin);
	return 0;
}
void yyerror(char *s){
	printf("%s\n","SORRY some syntax error is there. ........ :(");
}
void success(void){
	printf("%s\n","PARSED SUCCESSFULLY .......... :)");
}