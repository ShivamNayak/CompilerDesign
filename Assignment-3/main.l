%{
	#include <stdio.h>
	#include <stdlib.h>
	#include "tok.h"
	int yyval[8000];
	int tok_index = 0;
%}
letter [a-zA-Z_]
digit [0-9]
quote ["'"]
start ["/*"]
end ["*/"]
%%
"for" {yyval[tok_index++] = FOR_TOK;printf("FOR_TOK\n");}
"while" {yyval[tok_index++] = WHILE_TOK;printf("WHILE_TOK\n");}
"switch" {yyval[tok_index++] = SWITCH_TOK;printf("SWITCH_TOK\n");}
"case" {yyval[tok_index++] = CASE_TOK;printf("CASE_TOK\n");}
"if" {yyval[tok_index++] = IF_TOK;printf("IF_TOK\n");}
"else" {yyval[tok_index++] = ELSE_TOK;printf("ELSE_TOK\n");}
"int" {yyval[tok_index++] = INTEGER_TOK;printf("INTEGER_TOK\n");}
"float" {yyval[tok_index++] = FLOATING_TOK;}
"double" {yyval[tok_index++] = DOUBLE_TOK;printf("DOUBLE_TOK\n");}
"char" {yyval[tok_index++] = CHAR_TOK;printf("CHAR_TOK\n");}
"break" {yyval[tok_index++] = BREAK_TOK;printf("BREAK_TOK\n");}
"default" {yyval[tok_index++] = DEFAULT_TOK;printf("DEFAULT_TOK\n");}
"return" {yyval[tok_index++] = RETURN_TOK;printf("RETURN_TOK\n");}
"#include" {yyval[tok_index++] = INCLUDE_TOK;printf("INCLUDE_TOK\n");}
"#define" {yyval[tok_index++] = DEFINE_TOK;printf("DEFINE_TOK\n");}
"//". {printf("Single line comment ignoring....... :(\n");}
"/*"([^*]|([*]+[^*/]))*[*]+[/]  {printf("Multiline Comment Ignoring ........ :(\n");}
";" {yyval[tok_index++] = SEMICOLON_TOK;printf("SEMICOLON_TOK\n");}
"," {yyval[tok_index++] = COMMA_TOK;printf("COMMA_TOK\n");}
"." {yyval[tok_index++] = DOT_TOK;printf("DOT_TOK\n");}
"{" {yyval[tok_index++] = LCURLY_TOK;printf("LCURLY_TOK\n");}
"}" {yyval[tok_index++] = RCURLY_TOK;printf("RCURLY_TOK\n");}
"(" {yyval[tok_index++] = LPAREN_TOK;printf("LPAREN_TOK\n");}
")" {yyval[tok_index++] = RPAREN_TOK;printf("RPAREN_TOK\n");}
"[" {yyval[tok_index++] = ARRAY_BRACKET_LTOK;printf("ARRAY_BRACKET_LTOK\n");}
"]" {yyval[tok_index++] = ARRAY_BRACKET_RTOK;printf("ARRAY_BRACKET_RTOK\n");}
"++" {yyval[tok_index++] = INCREMENT_TOK;printf("INCREMENT_TOK\n");}
"+=" {yyval[tok_index++] = ADDITION_EQUAL_TOK;printf("ADDITION_EQUAL_TOK\n");}
"+" {yyval[tok_index++] = ADDITION_TOK;printf("ADDITION_TOK\n");}
"--" {yyval[tok_index++] = DECREMENT_TOK;printf("DECREMENT_TOK\n");}
"-=" {yyval[tok_index++] = MINUS_EQUAL_TOK;printf("MINUS_EQUAL_TOK\n");}
"-" {yyval[tok_index++] = MINUS_TOK;printf("MINUS_TOK\n");}
"*=" {yyval[tok_index++] = MULTIPLICATION_EQUAL_TOK;printf("MULTIPLICATION_EQUAL_TOK\n");}
"*" {yyval[tok_index++] = MULTIPLICATION_TOK;printf("MULTIPLICATION_TOK\n");}
"/=" {yyval[tok_index++] = DIVISION_EQUAL_TOK;printf("DIVISION_EQUAL_TOK\n");}
"/" {yyval[tok_index++] = DIVISION_TOK;printf("DIVISION_TOK\n");}
"%=" {yyval[tok_index++] = MODULO_EQUAL_TOK;printf("MODULO_EQUAL_TOK\n");}
"%" {yyval[tok_index++] = MODULO_TOK;printf("MODULO_TOK\n");}
">>" {yyval[tok_index++] = RIGHT_SHIFT_TOK;printf("RIGHT_SHIFT_TOK\n");}
">=" {yyval[tok_index++] = GREATER_THAN_EQUAL_TOK;printf("GREATER_THAN_EQUAL_TOK\n");}
">" {yyval[tok_index++] = GREATER_TOK;printf("GREATER_TOK\n");}
"<<" {yyval[tok_index++] = LEFT_SHIFT_TOK;printf("LEFT_SHIFT_TOK\n");}
"<=" {yyval[tok_index++] = LESS_THAN_EQUAL_TOK;printf("LESS_THAN_EQUAL_TOK\n");}
"<" {yyval[tok_index++] = LESS_TOK;printf("LESS_TOK\n");}
"==" {yyval[tok_index++] = EQUAL_COMPARE_TOK;printf("EQUAL_COMPARE_TOK\n");}
"=" {yyval[tok_index++] = EQUAL_TOK;printf("EQUAL_TOK\n");}
"!=" {yyval[tok_index++] = NOT_EQUAL_TOK;printf("NOT_EQUAL_TOK\n");}
"!" {yyval[tok_index++] = NOT_TOK;printf("NOT_TOK\n");}
"||" {yyval[tok_index++] = OR_TOK;printf("OR_TOK\n");}
"|=" {yyval[tok_index++] = BIT_OR_EQUAL_TOK;printf("BIT_OR_EQUAL_TOK\n");}
"|" {yyval[tok_index++] = BIT_OR_TOK;printf("BIT_OR_TOK\n");}
"&&" {yyval[tok_index++] = AND_TOK;printf("AND_TOK\n");}
"&=" {yyval[tok_index++] = BIT_AND_EQUAL_TOK;printf("BIT_AND_EQUAL_TOK\n");}
"&" {yyval[tok_index++] = BIT_AND_TOK;printf("BIT_AND_TOK\n");}
" " {yyval[tok_index++] = SPACE_TOK;printf("SPACE_TOK\n");}
":" {yyval[tok_index++] = COLON_TOK;printf("COLON_TOK\n");}
[\t\n]
{letter}({letter}|{digit})* {yyval[tok_index++] = ID_TOK;printf("ID_TOK\n");}
{digit}+ {yyval[tok_index++] = INT_CONST_TOK;printf("INT_CONST_TOK\n");}
{digit}+({letter}|{digit})* {printf("error\n");return -1;}
%%
int main(int argc,const char* argv[]){
	if (argc < 2){
		printf("No Input File\n");
		return -1;
	}
	yyin = fopen(argv[1],"r");
	while(!feof(yyin)){
		yylex();
	}
	printf("Token generation Has been completed. Following are the generated tokens ... :)\n");
	for(int i = 0; i<tok_index;i++){
		printf("%d ",yyval[i]);
	}
	printf("\n");
}	
int yywrap(){return 1;}
