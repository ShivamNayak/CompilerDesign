%{
	#include <stdio.h>
	#include <stdlib.h>
	#include "y.tab.h"
	extern int yylineno;
%}
letter [a-zA-Z_]
digit [0-9]
%%
"+" {return ADDITION_TOK;}
"-" {return MINUS_TOK;}
"*" { return MULTIPLICATION_TOK;}
"/" {return DIVISION_TOK;}
"%" {return MODULO_TOK;}
"(" {return LPAREN_TOK;}
")" {return RPAREN_TOK;}
";" {return SEMICOLON_TOK;}
"=" {return EQUAL_TOK;}
"," {return COMMA_TOK;}
"int" {return INTEGER_TOK;}
"float" {return FLOATING_TOK;}
"double" {return DOUBLE_TOK;}
"char" {return CHAR_TOK;}
"main" {return MAIN_TOK;}
"if" {return IF_TOK;}
"else" {return ELSE_TOK;}
"{" {return LCURLY_TOK;}
"}" {return RCURLY_TOK;}
">=" {return GREATER_THAN_EQUAL_TOK;}
">" {return GREATER_TOK;}
"<=" {return LESS_THAN_EQUAL_TOK;}
"<" {return LESS_TOK;}
[\t" "]
[\n] {yylineno++;}
{letter}({letter}|{digit})* { 
	char *temp = strdup(yytext);
	yylval.A.i_name = (char*)malloc(sizeof(char)*yyleng);
	strncpy(yylval.A.i_name,temp,yyleng);
	temp = NULL;
	return ID_TOK;}
{digit}+ {
	char *temp = strdup(yytext);
	yylval.A.i_name = (char*)malloc(sizeof(char)*yyleng);
	yylval.A.i_val = (char*)malloc(sizeof(char)*yyleng);
	strncpy(yylval.A.i_name,temp,yyleng);
	strncpy(yylval.A.i_val,temp,yyleng);
	temp = NULL;
	return INT_CONST_TOK;}
{digit}+({letter}|{digit})* {;}
%%
int yywrap(){return 1;}