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
    9,    9,    9,    9,    9,   10,   11,   12,   13,    5,
   14,   14,    3,    3,    3,    3,    3,    3,    3,    3,
    3,    3,    3,    3,    3,    3,    3,    3,   16,   16,
   16,   16,   16,   16,   16,   16,   16,   16,   16,   16,
   16,   16,   16,   16,   16,   16,   16,    6,    6,    6,
    6,    6,    6,    6,    6,    6,    6,    6,    6,   17,
   17,   17,   17,   18,   18,   18,   18,   18,   18,   18,
   15,   15,   15,   15,   15,   15,   15,   15,   15,   15,
   15,   15,   15,   15,   15,   15,   15,   15,    4,    4,
    7,    7,   19,   20,   20,   20,   20,
};
static const YYINT yylen[] = {                            2,
    1,    2,    0,    1,    2,    2,    7,    7,    6,    6,
    6,    6,    6,    8,    0,    1,    1,    1,    1,    1,
    3,    3,    3,    3,    0,    2,    2,    2,    2,    3,
    2,    0,    2,    2,    2,    2,    1,    1,    2,    4,
    1,    3,    1,    1,    3,    1,    1,    2,    3,    3,
    3,    3,    3,    3,    3,    3,    3,    3,    3,    3,
    3,    3,    3,    3,    3,    3,    3,    3,    3,    3,
    3,    3,    3,    3,    3,    3,    3,    3,    3,    2,
    2,    2,    2,    3,    3,    3,    3,    3,    3,    2,
    3,    3,    3,    3,    3,    3,    3,    3,    3,    3,
    3,    3,    3,    3,    3,    3,    3,    3,   11,    4,
    7,    0,    4,    1,    1,    3,    0,
};
static const YYINT yydefred[] = {                         3,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    4,    0,    0,    0,    0,   38,    2,    0,    0,   43,
   41,   44,   46,   47,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   82,   83,   90,    0,   80,    0,
   81,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   48,
    5,    0,    6,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  114,    0,    0,   93,   94,
   95,   96,   97,   98,   99,  100,  101,   68,   72,   69,
   73,   70,   74,   71,   75,   76,   77,    0,   92,   42,
   45,  108,   78,   79,  102,  104,   84,   87,   85,   88,
  103,  105,   86,   89,  106,  107,    0,    0,    0,  110,
    0,    0,    0,    0,    0,    0,    0,    0,   16,    0,
    0,    0,    0,    0,    0,   40,    0,    0,    0,    0,
  113,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   31,   30,    0,    0,    0,    0,    0,   26,   27,
   28,   29,    0,    0,    0,    0,    0,    0,    0,    0,
  116,   49,   54,   63,   50,   55,   51,   56,   52,   57,
   53,   58,   59,   61,   60,   62,   64,   66,   65,   67,
    0,    0,    0,    0,    0,    9,   10,   21,   22,   23,
   24,   11,   12,   13,    0,    0,    8,    7,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  109,
    0,   14,  111,
};
static const YYINT yydgoto[] = {                          1,
    2,  117,   18,   19,   63,   20,  193,  124,  130,  131,
  132,  133,  134,  118,   21,  100,   22,   23,   24,   78,
};
static const YYINT yysindex[] = {                         0,
    0, -245, -268, -255, -246, -233, -264, -299, -262, -257,
    0, -251, -239, -229, -181,    0,    0, -184, -177,    0,
    0,    0,    0,    0, -162, -210, -207, -210, -166, -225,
 -158, -157, -155, -151,    0,    0,    0, -263,    0, -183,
    0, -270, -259, -254, -248, -227, -224, -222, -204, -176,
 -280, -173, -160, -149, -146, -142, -139, -134, -137,    0,
    0, -245,    0, -179, -218, -133, -127, -115, -103, -234,
 -132, -144, -234, -234, -234,    0,  -97, -100,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0, -148,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0, -245, -129,  -99,    0,
  -73, -177, -110,  -72, -109, -107, -106, -105,    0,  -68,
  -63,  -62,  -61,  -60,  -64,    0,  -59,  -58,  -57, -263,
    0, -130,  -98, -128, -126, -124, -122, -120, -118, -116,
 -114,    0,    0,  -93,  -43,  -39,  -56, -177,    0,    0,
    0,    0, -177, -234, -234, -234, -234, -177, -177, -177,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  -49,  -90,  -51, -177,  -38,    0,    0,    0,    0,    0,
    0,    0,    0,    0, -210,  -86,    0,    0,  -55,  -42,
 -245,  -85, -261,  -37,  -48, -243,  -41,  -35,  -47,    0,
  -43,    0,    0,
};
static const YYINT yyrindex[] = {                         0,
    0,  235,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  -34,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  -33,
  -32,  -31,  -30,  -29,    0,    0,    0,  -28,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  -25,    0,    0,    0,    0,    0,    0,  -27,  -24,
    0,    0,  -24,  -24,  -24,    0,  -23,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  -20,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0, -241,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  -22,  -21,  -19,  -18, -202,    0,    0,    0,    0,  -28,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  -16,    0,    0,    0,    0,    0,
    0,    0,    0,  -24,  -24,  -24,  -24,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   -9,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  -16,    0,    0,
};
static const YYINT yygindex[] = {                         0,
    0,  234,    0,    0, -121,  -26,   24,    0,  -70,    0,
    0,    0,    0, -111,    2,    0,   33,  196,  -44,  108,
};
#define YYTABLESIZE 261
static const YYINT yytable[] = {                         66,
  156,   68,  137,  138,  139,  152,  102,   29,   31,   76,
   25,    3,    4,    5,   32,    6,   60,    7,    8,    9,
   10,   12,   14,   26,   13,   32,  102,   11,  125,  126,
  127,  128,   27,   98,   99,   32,  196,   12,  129,   39,
   13,  197,   41,   80,   81,   28,  202,  203,  204,   30,
   77,   33,  216,   70,   82,   83,   34,   14,   40,   84,
   85,   42,   35,   43,   44,   86,   87,   45,   15,   16,
   91,   91,  208,  136,   36,   71,   46,   47,   53,   48,
   49,   50,   56,   52,   37,   58,   88,   89,   61,   90,
   91,   92,   93,  198,  199,  200,  201,   38,   62,  214,
   64,   39,   40,   65,   41,   42,   67,   43,   44,   94,
   95,   45,   69,   46,   47,   72,   48,   49,   50,   51,
   52,   73,   53,   74,   54,   55,   56,   75,   57,   58,
   38,   79,   59,  142,  119,  143,  144,   96,   97,  145,
  103,  104,  146,  147,  120,  148,   40,  153,  149,   42,
  121,   43,   44,  105,  106,   45,  150,   54,   55,  123,
  151,   57,  122,   71,  107,  108,   53,  109,  110,   59,
   56,  111,  112,   58,  113,  114,  140,  141,  210,  115,
  116,  135,   99,  172,  173,  175,  176,  177,  178,  179,
  180,  181,  182,  183,  184,  185,  186,  187,  188,  189,
  190,  154,  155,  157,  159,  158,  160,  161,  162,  163,
  164,  165,  166,  167,   38,  174,  192,  195,  168,  169,
  170,  191,  194,  205,  206,  207,  211,  209,  215,  218,
  213,  219,  212,  222,    1,   17,  220,  221,   37,   33,
   39,   34,   35,   36,  223,  217,  101,  171,    0,  117,
   15,   32,   91,   25,  115,   17,   18,   32,   19,   20,
  112,
};
static const YYINT yycheck[] = {                         26,
  122,   28,   73,   74,   75,  117,   51,  272,    7,  273,
  279,  257,  258,  259,  314,  261,   15,  263,  264,  265,
  266,  283,  303,  279,  286,  267,   71,  273,  263,  264,
  265,  266,  279,  314,  315,  277,  158,  283,  273,  283,
  286,  163,  286,  314,  315,  279,  168,  169,  170,  314,
  314,  314,  314,  279,  314,  315,  314,  303,  284,  314,
  315,  287,  314,  289,  290,  314,  315,  293,  314,  315,
  273,  274,  194,   72,  314,  301,  295,  296,  304,  298,
  299,  300,  308,  302,  314,  311,  314,  315,  273,  314,
  315,  314,  315,  164,  165,  166,  167,  279,  276,  211,
  263,  283,  284,  314,  286,  287,  314,  289,  290,  314,
  315,  293,  279,  295,  296,  274,  298,  299,  300,  301,
  302,  279,  304,  279,  306,  307,  308,  279,  310,  311,
  279,  315,  314,  282,  314,  284,  285,  314,  315,  288,
  314,  315,  291,  292,  278,  294,  284,  277,  297,  287,
  278,  289,  290,  314,  315,  293,  305,  306,  307,  263,
  309,  310,  278,  301,  314,  315,  304,  314,  315,  314,
  308,  314,  315,  311,  314,  315,  274,  278,  205,  314,
  315,  314,  315,  314,  315,  314,  315,  314,  315,  314,
  315,  314,  315,  314,  315,  314,  315,  314,  315,  314,
  315,  301,  276,  314,  314,  278,  314,  314,  314,  278,
  274,  274,  274,  274,  279,  314,  260,  274,  278,  278,
  278,  315,  262,  273,  315,  277,  313,  266,  314,  267,
  273,  280,  288,  281,    0,    2,  278,  273,  273,  273,
  273,  273,  273,  273,  221,  213,   51,  140,   -1,  278,
  278,  277,  273,  278,  278,  278,  278,  267,  278,  278,
  277,
};
#define YYFINAL 1
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 316
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
"SPACE_TOK","COLON_TOK","ID_TOK","INT_CONST_TOK","RIGHT_SHIT_TOK",0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"illegal-symbol",
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
"assignment_expression : ID_TOK EQUAL_TOK func_call",
"reserved_word : FOR_TOK LPAREN_TOK INTEGER_TOK ID_TOK EQUAL_TOK INT_CONST_TOK SEMICOLON_TOK relational_expression SEMICOLON_TOK unary_expression RPAREN_TOK",
"reserved_word : WHILE_TOK LPAREN_TOK relational_expression RPAREN_TOK",
"case_blocks : CASE_TOK INT_CONST_TOK COLON_TOK nested_statement BREAK_TOK SEMICOLON_TOK case_blocks",
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
#line 205 "main.y"

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
#line 508 "y.tab.c"

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
#line 714 "y.tab.c"
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
