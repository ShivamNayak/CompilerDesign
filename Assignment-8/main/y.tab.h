#define ID_TOK 257
#define INT_CONST_TOK 258
#define SEMICOLON_TOK 259
#define LPAREN_TOK 260
#define RPAREN_TOK 261
#define ADDITION_TOK 262
#define MINUS_TOK 263
#define MULTIPLICATION_TOK 264
#define DIVISION_TOK 265
#define MODULO_TOK 266
#define UNARY_MINUS_CONST_TOK 267
#define EQUAL_TOK 268
#define UMINUS_TOK 269
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union{
	struct custom_type{
		int i_type;
		char *i_name;
		char *i_val;
	}A;	
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
extern YYSTYPE yylval;
