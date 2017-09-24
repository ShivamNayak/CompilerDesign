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

#line 31 "y.tab.c"

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
#define RIGHT_SHIT_TOK 316
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    1,    1,    2,    2,    2,    2,    2,    2,    2,
    2,    2,    2,    8,    8,    9,    9,    9,    9,    9,
    9,   10,   11,   12,   13,    5,   14,   14,    3,    3,
    3,    3,    3,    3,    3,    3,    3,    3,    3,    3,
    3,    3,   16,   16,   16,   16,   16,   16,   16,   16,
   16,   16,   16,   16,   16,   16,   16,   16,   16,   16,
   16,    6,    6,    6,    6,    6,    6,    6,    6,    6,
    6,    6,    6,   17,   17,   17,   17,   18,   18,   18,
   18,   18,   18,   18,   15,   15,   15,   15,   15,   15,
   15,   15,   15,   15,   15,   15,   15,   15,   15,   15,
   15,    4,    4,    7,    7,
};
static const YYINT yylen[] = {                            2,
    1,    2,    0,    1,    2,    2,    7,    7,    6,    6,
    6,    6,    6,    8,    0,    1,    3,    3,    3,    3,
    0,    2,    2,    2,    2,    3,    2,    0,    2,    2,
    2,    2,    1,    1,    2,    4,    1,    3,    1,    1,
    3,    1,    3,    3,    3,    3,    3,    3,    3,    3,
    3,    3,    3,    3,    3,    3,    3,    3,    3,    3,
    3,    3,    3,    3,    3,    3,    3,    3,    3,    3,
    3,    3,    3,    2,    2,    2,    2,    3,    3,    3,
    3,    3,    3,    2,    3,    3,    3,    3,    3,    3,
    3,    3,    3,    3,    3,    3,    3,    3,    3,    3,
    3,   11,    4,    7,    0,
};
static const YYINT yydefred[] = {                         3,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    4,    0,    0,    0,    0,   34,    2,    0,    0,   39,
   37,   40,   42,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   76,   77,   84,   74,    0,   75,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    5,    0,    6,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   87,   88,   89,   90,   91,   92,   93,   94,   95,
   62,   66,   63,   67,   64,   68,   65,   69,   70,   71,
    0,   86,   38,   41,   72,   73,   96,   98,   78,   81,
   79,   82,   97,   99,   80,   83,  100,  101,    0,    0,
    0,  103,    0,    0,    0,    0,    0,    0,    0,    0,
   16,    0,    0,    0,    0,    0,   85,    0,   36,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   27,   26,    0,    0,    0,    0,    0,   22,
   23,   24,   25,    0,    0,    0,    0,    0,    0,    0,
    0,   43,   48,   57,   44,   49,   45,   50,   46,   51,
   47,   52,   53,   55,   54,   56,   58,   60,   59,   61,
    0,    0,    0,    0,    0,    9,   10,   17,   18,   19,
   20,   11,   12,   13,    0,    0,    8,    7,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  102,
    0,   14,  104,
};
static const YYINT yydgoto[] = {                          1,
    2,  109,   18,   19,   59,   20,  183,  116,  122,  123,
  124,  125,  126,  110,   21,   93,   22,   23,
};
static const YYINT yysindex[] = {                         0,
    0, -246, -270, -265, -263, -249, -264, -275, -273, -259,
    0, -256, -248, -242, -189,    0,    0, -199, -201,    0,
    0,    0,    0, -176, -218, -215, -218, -174, -228, -166,
 -165, -163, -155,    0,    0,    0,    0, -195,    0, -279,
 -271, -269, -266, -251, -244, -236, -212, -187, -293, -184,
 -171, -160, -157, -153, -150, -147,    0, -246,    0, -180,
 -214, -138, -126, -119, -114, -240, -143, -177, -240, -240,
 -240,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
 -159,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0, -246, -111,
 -132,    0,  -85, -201, -122,  -84, -121, -118, -117, -116,
    0,  -83,  -75,  -74,  -73,  -72,    0, -148,    0,  -71,
  -70,  -69, -141, -110, -139, -137, -135, -133, -131, -129,
 -127, -125,    0,    0, -112,  -55,  -56,  -64, -201,    0,
    0,    0,    0, -201, -240, -240, -240, -240, -201, -201,
 -201,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  -62, -103,  -63, -201,  -53,    0,    0,    0,    0,    0,
    0,    0,    0,    0, -218,  -98,    0,    0,  -68,  -57,
 -246,  -97, -254,  -49,  -61, -252,  -54,  -52,  -59,    0,
  -55,    0,    0,
};
static const YYINT yyrindex[] = {                         0,
    0,  223,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  -48,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  -47,  -46,
  -45,  -44,  -43,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  -42,    0,    0,
    0,    0,    0,    0,  -41,  -40,    0,    0,  -40,  -40,
  -40,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  -39,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0, -239,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  -38,    0,    0,    0,    0,
    0,    0,    0,    0,  -40,  -40,  -40,  -40,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  -36,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  -38,    0,    0,
};
static const YYINT yygindex[] = {                         0,
    0,  230,    0,    0, -107,  -25,   22,    0,  -66,    0,
    0,    0,    0, -108,   -1,    0,   33,  191,
};
#define YYTABLESIZE 240
static const YYINT yytable[] = {                         62,
  143,   64,  130,  131,  132,   30,  147,   28,   24,   14,
    3,    4,    5,   25,    6,   26,    7,    8,    9,   10,
   91,   92,  117,  118,  119,  120,   11,   28,   12,   27,
   37,   13,  121,   39,   73,   74,   12,   28,   31,   13,
   32,  186,   75,   76,   77,   78,  187,   79,   80,   29,
   66,  192,  193,  194,   33,   38,   14,   34,   40,  206,
   41,   42,   81,   82,   43,   35,  129,   15,   16,   83,
   84,   36,   67,   57,   58,   51,  198,   85,   86,   54,
   44,   45,   56,   46,   47,   48,   60,   50,  188,  189,
  190,  191,  204,   37,   38,   61,   39,   40,   63,   41,
   42,   87,   88,   43,   65,   44,   45,   68,   46,   47,
   48,   49,   50,   69,   51,   70,   52,   53,   54,   72,
   55,   56,  133,   71,  134,  135,   89,   90,  136,   95,
   96,  137,  138,  111,  139,   38,  128,  140,   40,  112,
   41,   42,   97,   98,   43,  141,   52,   53,  115,  142,
   55,  113,   67,   99,  100,   51,  101,  102,  114,   54,
  103,  104,   56,  105,  106,  144,  107,  108,  145,  200,
  127,   92,  162,  163,  165,  166,  167,  168,  169,  170,
  171,  172,  173,  174,  175,  176,  177,  178,  179,  180,
  146,  148,  150,  149,  154,  151,  152,  153,  155,  156,
  157,  158,  181,  164,  182,  184,  159,  160,  161,  185,
  195,  196,  199,  197,  201,  203,  205,  208,  209,  202,
  211,  212,    1,  210,   33,   29,   35,   30,   31,   32,
   28,   17,  213,   85,   28,  207,   15,   21,  105,   94,
};
static const YYINT yycheck[] = {                         25,
  109,   27,   69,   70,   71,    7,  114,  272,  279,  303,
  257,  258,  259,  279,  261,  279,  263,  264,  265,  266,
  314,  315,  263,  264,  265,  266,  273,  267,  283,  279,
  283,  286,  273,  286,  314,  315,  283,  277,  314,  286,
  314,  149,  314,  315,  314,  315,  154,  314,  315,  314,
  279,  159,  160,  161,  314,  284,  303,  314,  287,  314,
  289,  290,  314,  315,  293,  314,   68,  314,  315,  314,
  315,  314,  301,  273,  276,  304,  184,  314,  315,  308,
  295,  296,  311,  298,  299,  300,  263,  302,  155,  156,
  157,  158,  201,  283,  284,  314,  286,  287,  314,  289,
  290,  314,  315,  293,  279,  295,  296,  274,  298,  299,
  300,  301,  302,  279,  304,  279,  306,  307,  308,  315,
  310,  311,  282,  279,  284,  285,  314,  315,  288,  314,
  315,  291,  292,  314,  294,  284,  314,  297,  287,  278,
  289,  290,  314,  315,  293,  305,  306,  307,  263,  309,
  310,  278,  301,  314,  315,  304,  314,  315,  278,  308,
  314,  315,  311,  314,  315,  277,  314,  315,  301,  195,
  314,  315,  314,  315,  314,  315,  314,  315,  314,  315,
  314,  315,  314,  315,  314,  315,  314,  315,  314,  315,
  276,  314,  314,  278,  278,  314,  314,  314,  274,  274,
  274,  274,  315,  314,  260,  262,  278,  278,  278,  274,
  273,  315,  266,  277,  313,  273,  314,  267,  280,  288,
  273,  281,    0,  278,  273,  273,  273,  273,  273,  273,
  267,    2,  211,  273,  277,  203,  278,  278,  277,   49,
};
#define YYFINAL 1
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 316
#define YYUNDFTOKEN 337
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
"SPACE_TOK","COLON_TOK","ID_TOK","INT_CONST_TOK","RIGHT_SHIT_TOK",0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : programe",
"programe : function",
"function : function statement",
"function :",
"statement : SEMICOLON_TOK",
"statement : expression SEMICOLON_TOK",
"statement : reserved_word balanced_paran",
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
"arith_expression : ID_TOK ADDITION_TOK ID_TOK",
"arith_expression : ID_TOK MINUS_TOK ID_TOK",
"arith_expression : ID_TOK MULTIPLICATION_TOK ID_TOK",
"arith_expression : ID_TOK DIVISION_TOK ID_TOK",
"arith_expression : ID_TOK MODULO_TOK ID_TOK",
"arith_expression : ID_TOK ADDITION_TOK INT_CONST_TOK",
"arith_expression : ID_TOK MINUS_TOK INT_CONST_TOK",
"arith_expression : ID_TOK MULTIPLICATION_TOK INT_CONST_TOK",
"arith_expression : ID_TOK DIVISION_TOK INT_CONST_TOK",
"arith_expression : ID_TOK MODULO_TOK INT_CONST_TOK",
"arith_expression : ID_TOK RIGHT_SHIFT_TOK ID_TOK",
"arith_expression : ID_TOK LEFT_SHIFT_TOK ID_TOK",
"arith_expression : ID_TOK RIGHT_SHIFT_TOK INT_CONST_TOK",
"arith_expression : ID_TOK LEFT_SHIFT_TOK INT_CONST_TOK",
"arith_expression : ID_TOK ADDITION_EQUAL_TOK ID_TOK",
"arith_expression : ID_TOK BIT_OR_TOK ID_TOK",
"arith_expression : ID_TOK BIT_AND_TOK ID_TOK",
"arith_expression : ID_TOK BIT_OR_TOK INT_CONST_TOK",
"arith_expression : ID_TOK BIT_AND_TOK INT_CONST_TOK",
"relational_expression : ID_TOK GREATER_THAN_EQUAL_TOK ID_TOK",
"relational_expression : ID_TOK GREATER_TOK ID_TOK",
"relational_expression : ID_TOK LESS_THAN_EQUAL_TOK ID_TOK",
"relational_expression : ID_TOK LESS_TOK ID_TOK",
"relational_expression : ID_TOK GREATER_THAN_EQUAL_TOK INT_CONST_TOK",
"relational_expression : ID_TOK GREATER_TOK INT_CONST_TOK",
"relational_expression : ID_TOK LESS_THAN_EQUAL_TOK INT_CONST_TOK",
"relational_expression : ID_TOK LESS_TOK INT_CONST_TOK",
"relational_expression : ID_TOK EQUAL_COMPARE_TOK ID_TOK",
"relational_expression : ID_TOK EQUAL_COMPARE_TOK INT_CONST_TOK",
"relational_expression : ID_TOK NOT_EQUAL_TOK ID_TOK",
"relational_expression : ID_TOK NOT_EQUAL_TOK INT_CONST_TOK",
"unary_expression : ID_TOK INCREMENT_TOK",
"unary_expression : ID_TOK DECREMENT_TOK",
"unary_expression : INCREMENT_TOK ID_TOK",
"unary_expression : DECREMENT_TOK ID_TOK",
"logic_expression : ID_TOK OR_TOK ID_TOK",
"logic_expression : ID_TOK AND_TOK ID_TOK",
"logic_expression : ID_TOK XOR_TOK ID_TOK",
"logic_expression : ID_TOK OR_TOK INT_CONST_TOK",
"logic_expression : ID_TOK AND_TOK INT_CONST_TOK",
"logic_expression : ID_TOK XOR_TOK INT_CONST_TOK",
"logic_expression : NOT_TOK ID_TOK",
"assignment_expression : ID_TOK EQUAL_TOK ID_TOK",
"assignment_expression : ID_TOK EQUAL_TOK INT_CONST_TOK",
"assignment_expression : ID_TOK ADDITION_EQUAL_TOK INT_CONST_TOK",
"assignment_expression : ID_TOK MINUS_EQUAL_TOK ID_TOK",
"assignment_expression : ID_TOK MINUS_EQUAL_TOK INT_CONST_TOK",
"assignment_expression : ID_TOK MULTIPLICATION_EQUAL_TOK ID_TOK",
"assignment_expression : ID_TOK MULTIPLICATION_EQUAL_TOK INT_CONST_TOK",
"assignment_expression : ID_TOK DIVISION_EQUAL_TOK ID_TOK",
"assignment_expression : ID_TOK DIVISION_EQUAL_TOK INT_CONST_TOK",
"assignment_expression : ID_TOK MODULO_EQUAL_TOK ID_TOK",
"assignment_expression : ID_TOK MODULO_EQUAL_TOK INT_CONST_TOK",
"assignment_expression : ID_TOK BIT_OR_EQUAL_TOK ID_TOK",
"assignment_expression : ID_TOK BIT_AND_EQUAL_TOK ID_TOK",
"assignment_expression : ID_TOK BIT_OR_EQUAL_TOK INT_CONST_TOK",
"assignment_expression : ID_TOK BIT_AND_EQUAL_TOK INT_CONST_TOK",
"assignment_expression : ID_TOK XOR_EQUAL_TOK ID_TOK",
"assignment_expression : ID_TOK XOR_EQUAL_TOK INT_CONST_TOK",
"reserved_word : FOR_TOK LPAREN_TOK INTEGER_TOK ID_TOK EQUAL_TOK INT_CONST_TOK SEMICOLON_TOK relational_expression SEMICOLON_TOK unary_expression RPAREN_TOK",
"reserved_word : WHILE_TOK LPAREN_TOK relational_expression RPAREN_TOK",
"case_blocks : CASE_TOK INT_CONST_TOK COLON_TOK nested_statement BREAK_TOK SEMICOLON_TOK case_blocks",
"case_blocks :",

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
#line 190 "main.y"

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
#line 485 "y.tab.c"

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
#line 26 "main.y"
	{success();}
break;
#line 691 "y.tab.c"
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
