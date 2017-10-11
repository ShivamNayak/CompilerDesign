/* original parser id follows */
/* yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93" */
/* (use YYMAJOR/YYMINOR for ifdefs dependent on parser version) */

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20140715

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)
#define YYENOMEM       (-2)
#define YYEOF          0
#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "main.y"
	#include <stdio.h>
	#include <stdlib.h>
	#include <stdarg.h>
	extern FILE *yyin;
	#define YYDEBUG 0
	void yyerror(char *s);
	int yylex(void);
	void success(void);	
	extern int yylineno,yychar;

#line 32 "y.tab.c"

#if ! defined(YYSTYPE) && ! defined(YYSTYPE_IS_DECLARED)
/* Default: YYSTYPE is the semantic value type. */
typedef int YYSTYPE;
# define YYSTYPE_IS_DECLARED 1
#endif

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define FOR_TOK 257
#define WHILE_TOK 258
#define SWITCH_TOK 259
#define CASE_TOK 260
#define IF_TOK 261
#define ELSE_TOK 262
#define INTEGER_TOK 263
#define FLOATING_TOK 264
#define DOUBLE_TOK 265
#define CHAR_TOK 266
#define BREAK_TOK 267
#define DEFAULT_TOK 268
#define RETURN_TOK 269
#define INCLUDE_TOK 270
#define DEFINE_TOK 271
#define MAIN_TOK 272
#define SEMICOLON_TOK 273
#define COMMA_TOK 274
#define DOT_TOK 275
#define LCURLY_TOK 276
#define RCURLY_TOK 277
#define RPAREN_TOK 278
#define LPAREN_TOK 279
#define ARRAY_BRACKET_LTOK 280
#define ARRAY_BRACKET_RTOK 281
#define ADDITION_TOK 282
#define INCREMENT_TOK 283
#define ADDITION_EQUAL_TOK 284
#define MINUS_TOK 285
#define DECREMENT_TOK 286
#define MINUS_EQUAL_TOK 287
#define MULTIPLICATION_TOK 288
#define MULTIPLICATION_EQUAL_TOK 289
#define DIVISION_EQUAL_TOK 290
#define DIVISION_TOK 291
#define MODULO_TOK 292
#define MODULO_EQUAL_TOK 293
#define RIGHT_SHIFT_TOK 294
#define GREATER_THAN_EQUAL_TOK 295
#define GREATER_TOK 296
#define LEFT_SHIFT_TOK 297
#define LESS_THAN_EQUAL_TOK 298
#define LESS_TOK 299
#define EQUAL_COMPARE_TOK 300
#define EQUAL_TOK 301
#define NOT_EQUAL_TOK 302
#define NOT_TOK 303
#define BIT_OR_EQUAL_TOK 304
#define BIT_OR_TOK 305
#define OR_TOK 306
#define AND_TOK 307
#define BIT_AND_EQUAL_TOK 308
#define BIT_AND_TOK 309
#define XOR_TOK 310
#define XOR_EQUAL_TOK 311
#define SPACE_TOK 312
#define COLON_TOK 313
#define ID_TOK 314
#define INT_CONST_TOK 315
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    1,    1,    2,    2,    2,    2,    2,    2,    2,
    2,    2,    2,    2,    2,    9,    9,   10,   10,   10,
   10,   10,   10,   10,   10,   10,   10,   11,   12,   13,
   14,    5,    5,   15,   15,    3,    3,    3,    3,    3,
    3,    3,    3,    3,    3,    3,    3,    3,    3,    3,
    3,    7,    7,    7,    7,    7,    7,    7,    7,    7,
    7,   20,   20,    6,    6,    6,    6,    6,    6,    6,
   17,   17,   17,   17,   18,   18,   18,   18,   16,   16,
   16,   16,   16,   16,   16,   16,   16,   16,    4,    4,
    8,    8,    8,   19,   21,   21,   21,   21,
};
static const YYINT yylen[] = {                            2,
    1,    2,    0,    1,    2,    2,    5,    5,    7,    7,
    6,    6,    6,    6,    6,    8,    0,    1,    1,    1,
    1,    1,    3,    3,    3,    3,    0,    2,    2,    2,
    2,    3,    1,    2,    0,    2,    2,    2,    2,    1,
    1,    2,    4,    1,    3,    1,    1,    3,    1,    1,
    2,    3,    3,    3,    3,    3,    3,    3,    3,    3,
    3,    1,    1,    3,    3,    3,    3,    3,    3,    3,
    2,    2,    2,    2,    3,    3,    3,    2,    3,    3,
    3,    3,    3,    3,    3,    3,    3,    3,   11,    4,
    7,    5,    0,    4,    1,    1,    3,    0,
};
static const YYINT yydefred[] = {                         3,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    4,    0,    0,    0,    0,    0,    0,    2,    0,    0,
   46,   44,   47,   49,   50,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   62,   63,    0,    0,
   73,   74,   78,    0,   71,    0,   72,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   51,    5,
   33,    0,    6,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   70,   95,    0,    0,   80,   81,
   82,   83,   84,    0,    0,   45,   48,   88,    0,   85,
   76,   86,   77,   87,    0,    0,   64,   65,   66,   67,
   68,   69,   75,    0,   90,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   18,    0,    0,    0,    0,    0,
    0,   79,   43,    0,    0,    0,    0,   94,    0,   34,
   32,    0,    0,   61,    0,    8,   52,   53,   54,   55,
   56,   57,   58,   59,   60,    0,    0,   28,   29,   30,
   31,    0,    0,    0,    0,    0,    0,    0,    0,   97,
    0,    0,    0,    0,    0,    0,   11,   12,   23,   24,
   25,   26,   13,   14,   15,    0,    0,    0,   10,    9,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   92,    0,   89,    0,   16,   91,
};
static const YYINT yydgoto[] = {                          1,
    2,  105,   19,   20,   63,   21,  117,  184,  130,  136,
  137,  138,  139,  140,  106,   22,   23,   24,   25,   26,
   88,
};
static const YYINT yysindex[] = {                         0,
    0, -140, -258, -244, -216, -206, -264, -299, -282, -238,
    0, -266, -231, -229, -235,  -97,    0,    0, -192, -247,
    0,    0,    0,    0,    0,   25, -173, -266, -194, -212,
 -157,    2, -139, -143, -142, -137,    0,    0, -138, -168,
    0,    0,    0, -250,    0, -235,    0, -235, -235, -235,
 -235, -228, -235, -235, -235, -235, -235, -135,    0,    0,
    0, -140,    0, -235, -235, -235, -235, -235, -235, -235,
 -169, -127, -122, -212, -121, -119,  -54,  -99, -172, -226,
 -154, -172, -172, -172,    0,    0, -106, -111,    0,    0,
    0,    0,    0, -210, -233,    0,    0,    0,   -9,    0,
    0,    0,    0,    0, -140, -100,    0,    0,    0,    0,
    0,    0,    0, -131,    0, -105,  -98, -247, -247, -235,
 -235, -235, -235, -235, -235, -235, -235, -235, -136,  -95,
 -133, -129, -123, -112,    0,  -75,  -68,  -66,  -65,  -62,
  -64,    0,    0,  -60,  -59,  -58, -250,    0,   17,    0,
    0,  -94, -251,    0,  -83,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  -50, -247,    0,    0,    0,
    0, -247, -172, -172, -172, -172, -247, -247, -247,    0,
  -57,  -85,  -81,  -42, -247,  -30,    0,    0,    0,    0,
    0,    0,    0,    0,    0, -266,  -74, -140,    0,    0,
  -41,  -24, -140,  -17,  -61, -255,  -15,  -16,  -26, -256,
  -22,  -10,    0,  -20,    0, -251,    0,    0,
};
static const YYINT yyrindex[] = {                         0,
    0,  269,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0, -101,  -73,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   -3,   -2,   -1,    4,   20,    0,    0,    0,    0,
    0,    0,    0,   12,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   21,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   16,   23,    0,
    0,   23,   23,   23,    0,    0,   29,    0,    0,    0,
    0,    0,    0,    0, -144,    0,    0,    0,   39,    0,
    0,    0,    0,    0, -253,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   40,   41,   50,   51,
 -167,    0,    0,    0,    0,    0,   12,    0,    0,    0,
    0,    0,   53,    0,    1,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   23,   23,   23,   23,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    8,    0,    0,
    0,    0,    8,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   53,    0,    0,
};
static const YYINT yygindex[] = {                         0,
    0,  315,    0,    0, -107,   -8,   -5,  116,    0,  -77,
    0,    0,    0,    0, -103,    3,  127,  282,  -19,  -12,
  188,
};
#define YYTABLESIZE 335
static const YYINT yytable[] = {                         40,
    7,  150,   43,   39,  144,  145,  146,   31,  182,   33,
  155,  156,   12,   35,   34,   40,  183,   77,   59,   72,
   27,   75,   86,   35,   76,   61,   45,   13,   62,   47,
   14,   35,   98,   89,   28,   90,   91,   92,   93,   99,
  100,  101,  102,  103,  104,   44,   96,   37,   38,   32,
   94,  107,  108,  109,  110,  111,  112,  113,  210,  187,
   98,   77,   29,   87,  188,   39,   74,  142,   94,  193,
  194,  195,   30,   54,   15,   36,   56,  200,   37,   38,
   60,  149,   41,  143,   42,   95,   38,  141,   38,   71,
  131,  132,  133,  134,  204,  189,  190,  191,  192,  207,
  135,   37,   38,   37,   38,   62,   62,  157,  158,  159,
  160,  161,  162,  163,  164,  165,    3,    4,    5,   73,
    6,   78,    7,    8,    9,   10,   64,   65,   62,   66,
   67,   68,   11,   69,   81,   82,   83,   62,   12,   85,
   62,   84,   13,   62,  114,   14,   62,   62,   46,   62,
  115,   48,   62,   49,   50,  116,  118,   51,  119,   58,
   62,   62,   15,  129,   62,   80,  148,  147,   53,  152,
  153,   40,   55,   16,   17,   57,  151,  166,  185,  154,
  168,   44,  167,   40,  169,   45,   46,  202,   47,   48,
  170,   49,   50,   62,   62,   51,   62,   62,   62,   41,
   62,  171,  172,   52,   62,  173,   53,  174,  175,   54,
   55,  176,   56,   57,   44,  196,   58,  177,  178,  179,
  181,   63,   63,  186,   63,   63,   63,  120,   63,  197,
  121,  198,   63,  122,  199,  201,  123,  124,  203,  125,
   64,   65,  126,   66,   67,   68,  205,   69,  206,  208,
  127,  212,  209,  214,  128,  215,  213,    7,    7,    7,
  217,    7,  216,    7,    7,    7,    7,    7,    1,   36,
   42,   37,  120,    7,   35,  121,   38,    7,  122,    7,
   79,  123,  124,    7,  125,   46,    7,  126,   48,   98,
   49,   50,   39,   17,   51,  127,   70,   35,  120,  128,
   27,  121,   80,    7,  122,   53,   96,  123,  124,   55,
  125,   79,   57,  126,    7,    7,   18,   19,   20,   64,
   65,  127,   66,   67,   68,  128,   69,   21,   22,   93,
   70,  218,  211,   97,  180,
};
static const YYINT yycheck[] = {                         12,
    0,  105,   15,   12,   82,   83,   84,  272,  260,    7,
  118,  119,  279,  267,  314,   28,  268,   30,   16,   28,
  279,   30,  273,  277,   30,  273,  283,  283,  276,  286,
  286,  314,   52,   46,  279,   48,   49,   50,   51,   52,
   53,   54,   55,   56,   57,  279,   52,  314,  315,  314,
  279,   64,   65,   66,   67,   68,   69,   70,  314,  167,
   80,   74,  279,  314,  172,   74,  279,   80,  279,  177,
  178,  179,  279,  307,  303,  314,  310,  185,  314,  315,
  273,   94,  314,   81,  314,  314,  315,  314,  315,  263,
  263,  264,  265,  266,  198,  173,  174,  175,  176,  203,
  273,  314,  315,  314,  315,  273,  274,  120,  121,  122,
  123,  124,  125,  126,  127,  128,  257,  258,  259,  314,
  261,  279,  263,  264,  265,  266,  295,  296,  273,  298,
  299,  300,  273,  302,  274,  279,  279,  282,  279,  278,
  285,  279,  283,  288,  314,  286,  291,  292,  284,  294,
  278,  287,  297,  289,  290,  278,  278,  293,  278,  314,
  305,  306,  303,  263,  309,  301,  278,  274,  304,  301,
  276,  273,  308,  314,  315,  311,  277,  314,  262,  278,
  314,  279,  278,  196,  314,  283,  284,  196,  286,  287,
  314,  289,  290,  295,  296,  293,  298,  299,  300,  273,
  302,  314,  278,  301,  306,  274,  304,  274,  274,  307,
  308,  274,  310,  311,  279,  273,  314,  278,  278,  278,
  315,  295,  296,  274,  298,  299,  300,  282,  302,  315,
  285,  313,  306,  288,  277,  266,  291,  292,  313,  294,
  295,  296,  297,  298,  299,  300,  288,  302,  273,  267,
  305,  267,  314,  280,  309,  278,  273,  257,  258,  259,
  281,  261,  273,  263,  264,  265,  266,  267,    0,  273,
  273,  273,  282,  273,  267,  285,  273,  277,  288,  279,
  279,  291,  292,  283,  294,  284,  286,  297,  287,  278,
  289,  290,  273,  278,  293,  305,  306,  277,  282,  309,
  278,  285,  301,  303,  288,  304,  278,  291,  292,  308,
  294,  273,  311,  297,  314,  315,    2,  278,  278,  295,
  296,  305,  298,  299,  300,  309,  302,  278,  278,  277,
  306,  216,  206,   52,  147,
};
#define YYFINAL 1
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 315
#define YYUNDFTOKEN 339
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"FOR_TOK","WHILE_TOK",
"SWITCH_TOK","CASE_TOK","IF_TOK","ELSE_TOK","INTEGER_TOK","FLOATING_TOK",
"DOUBLE_TOK","CHAR_TOK","BREAK_TOK","DEFAULT_TOK","RETURN_TOK","INCLUDE_TOK",
"DEFINE_TOK","MAIN_TOK","SEMICOLON_TOK","COMMA_TOK","DOT_TOK","LCURLY_TOK",
"RCURLY_TOK","RPAREN_TOK","LPAREN_TOK","ARRAY_BRACKET_LTOK",
"ARRAY_BRACKET_RTOK","ADDITION_TOK","INCREMENT_TOK","ADDITION_EQUAL_TOK",
"MINUS_TOK","DECREMENT_TOK","MINUS_EQUAL_TOK","MULTIPLICATION_TOK",
"MULTIPLICATION_EQUAL_TOK","DIVISION_EQUAL_TOK","DIVISION_TOK","MODULO_TOK",
"MODULO_EQUAL_TOK","RIGHT_SHIFT_TOK","GREATER_THAN_EQUAL_TOK","GREATER_TOK",
"LEFT_SHIFT_TOK","LESS_THAN_EQUAL_TOK","LESS_TOK","EQUAL_COMPARE_TOK",
"EQUAL_TOK","NOT_EQUAL_TOK","NOT_TOK","BIT_OR_EQUAL_TOK","BIT_OR_TOK","OR_TOK",
"AND_TOK","BIT_AND_EQUAL_TOK","BIT_AND_TOK","XOR_TOK","XOR_EQUAL_TOK",
"SPACE_TOK","COLON_TOK","ID_TOK","INT_CONST_TOK",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : programe",
"programe : function",
"function : function statement",
"function :",
"statement : SEMICOLON_TOK",
"statement : expression SEMICOLON_TOK",
"statement : reserved_word balanced_paran",
"statement : IF_TOK LPAREN_TOK relational_expression RPAREN_TOK balanced_paran",
"statement : IF_TOK LPAREN_TOK arith_expression RPAREN_TOK balanced_paran",
"statement : IF_TOK LPAREN_TOK relational_expression RPAREN_TOK balanced_paran ELSE_TOK balanced_paran",
"statement : SWITCH_TOK LPAREN_TOK ID_TOK RPAREN_TOK LCURLY_TOK case_blocks RCURLY_TOK",
"statement : INTEGER_TOK MAIN_TOK LPAREN_TOK main_args RPAREN_TOK balanced_paran",
"statement : INTEGER_TOK ID_TOK LPAREN_TOK function_args RPAREN_TOK balanced_paran",
"statement : FLOATING_TOK ID_TOK LPAREN_TOK function_args RPAREN_TOK balanced_paran",
"statement : DOUBLE_TOK ID_TOK LPAREN_TOK function_args RPAREN_TOK balanced_paran",
"statement : CHAR_TOK ID_TOK LPAREN_TOK function_args RPAREN_TOK balanced_paran",
"main_args : INTEGER_TOK ID_TOK COMMA_TOK CHAR_TOK MULTIPLICATION_TOK ID_TOK ARRAY_BRACKET_LTOK ARRAY_BRACKET_RTOK",
"main_args :",
"function_args : SEMICOLON_TOK",
"function_args : int_arg",
"function_args : float_arg",
"function_args : double_arg",
"function_args : char_arg",
"function_args : int_arg COMMA_TOK function_args",
"function_args : float_arg COMMA_TOK function_args",
"function_args : double_arg COMMA_TOK function_args",
"function_args : char_arg COMMA_TOK function_args",
"function_args :",
"int_arg : INTEGER_TOK ID_TOK",
"float_arg : FLOATING_TOK ID_TOK",
"double_arg : DOUBLE_TOK ID_TOK",
"char_arg : CHAR_TOK ID_TOK",
"balanced_paran : LCURLY_TOK nested_statement RCURLY_TOK",
"balanced_paran : SEMICOLON_TOK",
"nested_statement : statement nested_statement",
"nested_statement :",
"expression : INTEGER_TOK ID_TOK",
"expression : FLOATING_TOK ID_TOK",
"expression : DOUBLE_TOK ID_TOK",
"expression : CHAR_TOK ID_TOK",
"expression : ID_TOK",
"expression : INT_CONST_TOK",
"expression : INTEGER_TOK assignment_expression",
"expression : INTEGER_TOK assignment_expression COMMA_TOK assignment_expression",
"expression : assignment_expression",
"expression : ID_TOK EQUAL_TOK arith_expression",
"expression : relational_expression",
"expression : unary_expression",
"expression : ID_TOK EQUAL_TOK logic_expression",
"expression : logic_expression",
"expression : func_call",
"expression : ID_TOK assignment_expression",
"arith_expression : operand ADDITION_TOK operand",
"arith_expression : operand MINUS_TOK operand",
"arith_expression : operand MULTIPLICATION_TOK operand",
"arith_expression : operand DIVISION_TOK operand",
"arith_expression : operand MODULO_TOK operand",
"arith_expression : operand RIGHT_SHIFT_TOK operand",
"arith_expression : operand LEFT_SHIFT_TOK operand",
"arith_expression : operand BIT_OR_TOK operand",
"arith_expression : operand BIT_AND_TOK operand",
"arith_expression : LPAREN_TOK arith_expression RPAREN_TOK",
"operand : ID_TOK",
"operand : INT_CONST_TOK",
"relational_expression : operand GREATER_THAN_EQUAL_TOK operand",
"relational_expression : operand GREATER_TOK operand",
"relational_expression : operand LESS_THAN_EQUAL_TOK operand",
"relational_expression : operand LESS_TOK operand",
"relational_expression : operand EQUAL_COMPARE_TOK operand",
"relational_expression : operand NOT_EQUAL_TOK operand",
"relational_expression : LPAREN_TOK relational_expression RPAREN_TOK",
"unary_expression : ID_TOK INCREMENT_TOK",
"unary_expression : ID_TOK DECREMENT_TOK",
"unary_expression : INCREMENT_TOK ID_TOK",
"unary_expression : DECREMENT_TOK ID_TOK",
"logic_expression : operand OR_TOK operand",
"logic_expression : ID_TOK AND_TOK operand",
"logic_expression : ID_TOK XOR_TOK operand",
"logic_expression : NOT_TOK operand",
"assignment_expression : ID_TOK EQUAL_TOK operand",
"assignment_expression : ID_TOK ADDITION_EQUAL_TOK operand",
"assignment_expression : ID_TOK MINUS_EQUAL_TOK operand",
"assignment_expression : ID_TOK MULTIPLICATION_EQUAL_TOK operand",
"assignment_expression : ID_TOK DIVISION_EQUAL_TOK operand",
"assignment_expression : ID_TOK MODULO_EQUAL_TOK operand",
"assignment_expression : ID_TOK BIT_OR_EQUAL_TOK operand",
"assignment_expression : ID_TOK BIT_AND_EQUAL_TOK operand",
"assignment_expression : ID_TOK XOR_EQUAL_TOK operand",
"assignment_expression : ID_TOK EQUAL_TOK func_call",
"reserved_word : FOR_TOK LPAREN_TOK INTEGER_TOK ID_TOK EQUAL_TOK INT_CONST_TOK SEMICOLON_TOK relational_expression SEMICOLON_TOK unary_expression RPAREN_TOK",
"reserved_word : WHILE_TOK LPAREN_TOK relational_expression RPAREN_TOK",
"case_blocks : CASE_TOK INT_CONST_TOK COLON_TOK nested_statement BREAK_TOK SEMICOLON_TOK case_blocks",
"case_blocks : DEFAULT_TOK COLON_TOK nested_statement BREAK_TOK SEMICOLON_TOK",
"case_blocks :",
"func_call : ID_TOK LPAREN_TOK call_args RPAREN_TOK",
"call_args : SEMICOLON_TOK",
"call_args : ID_TOK",
"call_args : ID_TOK COMMA_TOK call_args",
"call_args :",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    YYINT    *s_base;
    YYINT    *s_mark;
    YYINT    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 186 "main.y"

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
	fprintf(stderr,"%s: next token of error token %d on line %d\n",s, yychar, yylineno-1);
}

void success(void){
	printf("%s\n","PARSED SUCCESSFULLY .......... :)");
}
#line 500 "y.tab.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    YYINT *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return YYENOMEM;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (YYINT *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return YYENOMEM;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return YYENOMEM;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    YYERROR_CALL("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == YYEOF) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 1:
#line 24 "main.y"
	{success();}
break;
#line 706 "y.tab.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
            if (yydebug)
            {
                yys = yyname[YYTRANSLATE(yychar)];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == YYEOF) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (YYINT) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    YYERROR_CALL("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
