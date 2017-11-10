#define ID_TOK 257
#define INT_CONST_TOK 258
#define SEMICOLON_TOK 259
#define LPAREN_TOK 260
#define RPAREN_TOK 261
#define MAIN_TOK 262
#define COMMA_TOK 263
#define LCURLY_TOK 264
#define RCURLY_TOK 265
#define IF_TOK 266
#define ELSE_TOK 267
#define ADDITION_TOK 268
#define MINUS_TOK 269
#define MULTIPLICATION_TOK 270
#define DIVISION_TOK 271
#define MODULO_TOK 272
#define UNARY_MINUS_CONST_TOK 273
#define EQUAL_TOK 274
#define INTEGER_TOK 275
#define FLOATING_TOK 276
#define DOUBLE_TOK 277
#define CHAR_TOK 278
#define LESS_TOK 279
#define LESS_THAN_EQUAL_TOK 280
#define GREATER_TOK 281
#define GREATER_THAN_EQUAL_TOK 282
#define EQUAL_COMPARE_TOK 283
#define NOT_EQUAL_TOK 284
#define UMINUS_TOK 285
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
