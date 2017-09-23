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
#define SPACE_TOK 311
#define COLON_TOK 312
#define ID_TOK 313
#define INT_CONST_TOK 314
#define RIGHT_SHIT_TOK 315
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    1,    1,    2,    2,    2,    2,    2,    2,    2,
    2,    2,    2,    8,    8,    9,    9,    9,    9,    9,
    9,   10,   11,   12,   13,    5,   14,   14,    3,    3,
    3,    3,    3,    3,    3,    3,    3,    3,    3,    3,
   16,   16,   16,   16,   16,   16,   16,   16,   16,   16,
   16,   16,   16,   16,   16,   16,   16,   16,   16,    6,
    6,    6,    6,    6,    6,    6,    6,    6,    6,    6,
    6,   17,   17,   17,   17,   18,   18,   18,   18,   18,
   18,   18,   15,   15,   15,   15,   15,   15,   15,   15,
   15,   15,   15,   15,   15,   15,   15,    4,    4,    7,
    7,
};
static const YYINT yylen[] = {                            2,
    1,    2,    0,    1,    2,    2,    7,    7,    6,    6,
    6,    6,    6,    8,    0,    1,    3,    3,    3,    3,
    0,    2,    2,    2,    2,    3,    2,    0,    2,    2,
    2,    2,    1,    1,    1,    3,    1,    1,    3,    1,
    3,    3,    3,    3,    3,    3,    3,    3,    3,    3,
    3,    3,    3,    3,    3,    3,    3,    3,    3,    3,
    3,    3,    3,    3,    3,    3,    3,    3,    3,    3,
    3,    2,    2,    2,    2,    3,    3,    3,    3,    3,
    3,    2,    3,    3,    3,    3,    3,    3,    3,    3,
    3,    3,    3,    3,    3,    3,    3,   11,    4,    7,
    0,
};
static const YYINT yydefred[] = {                         3,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    4,    0,    0,    0,    0,   34,    2,    0,    0,   37,
   35,   38,   40,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   74,   75,   82,   72,    0,   73,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    5,    0,    6,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   85,   86,   87,
   88,   89,   90,   91,   92,   93,   60,   64,   61,   65,
   62,   66,   63,   67,   68,   69,    0,   84,   36,   39,
   70,   71,   94,   96,   76,   79,   77,   80,   95,   97,
   78,   81,    0,    0,    0,   99,    0,    0,    0,    0,
    0,    0,    0,    0,   16,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   27,   26,    0,    0,    0,    0,    0,
   22,   23,   24,   25,    0,    0,    0,    0,    0,    0,
    0,    0,   41,   46,   55,   42,   47,   43,   48,   44,
   49,   45,   50,   51,   53,   52,   54,   56,   58,   57,
   59,    0,    0,    0,    0,    0,    9,   10,   17,   18,
   19,   20,   11,   12,   13,    0,    0,    8,    7,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   98,    0,   14,  100,
};
static const YYINT yydgoto[] = {                          1,
    2,  103,   18,   19,   57,   20,  174,  110,  116,  117,
  118,  119,  120,  104,   21,   89,   22,   23,
};
static const YYINT yysindex[] = {                         0,
    0, -250, -269, -267, -257, -251, -270, -281, -272, -236,
    0, -219, -216, -210, -191,    0,    0, -227, -214,    0,
    0,    0,    0, -151, -199, -195, -199, -206, -157, -130,
 -129, -128,    0,    0,    0,    0, -225,    0, -288, -279,
 -274, -264, -258, -234, -232, -230, -223, -276, -213, -193,
 -190, -188, -186, -184,    0, -250,    0, -161, -224, -125,
 -124, -123, -107, -205, -205, -205, -205,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0, -240,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0, -250, -120, -143,    0, -117, -250, -153, -115,
 -152, -149, -148, -147,    0, -111, -106, -105, -104, -103,
 -102, -101, -100, -182, -141, -180, -178, -176, -174, -172,
 -170, -168, -166,    0,    0, -140,  -85,  -83,  -94, -214,
    0,    0,    0,    0, -214, -205, -205, -205, -205, -214,
 -214, -214,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  -92, -132,  -93, -250,  -81,    0,    0,    0,    0,
    0,    0,    0,    0,    0, -199, -126,    0,    0,  -99,
  -90, -250, -122, -266,  -80,  -88, -265,  -84,  -78,  -82,
    0,  -85,    0,    0,
};
static const YYINT yyrindex[] = {                         0,
    0,  188,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  -77,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  -76,  -75,
  -73,  -72,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  -74,    0,    0,    0,    0,
    0,    0,  -71,  -70,  -70,  -70,  -70,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  -69,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  -74,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  -68,    0,    0,    0,
    0,    0,    0,    0,    0,  -70,  -70,  -70,  -70,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  -68,    0,    0,
};
static const YYINT yygindex[] = {                         0,
    0,   -2,    0,    0, -121,  -24,   -9,    0,  -61,    0,
    0,    0,    0,   99,    0,    0,   11,  158,
};
#define YYTABLESIZE 209
static const YYINT yytable[] = {                         17,
   60,   28,   62,  121,  122,  123,    3,    4,    5,   24,
    6,   25,    7,    8,    9,   10,   12,   36,  177,   13,
   38,   26,   11,  178,   69,   70,   14,   27,  183,  184,
  185,   30,   12,   71,   72,   13,   87,   88,   73,   74,
   31,  124,   29,  125,  126,   55,  197,  127,   75,   76,
  128,  129,   14,  130,   77,   78,  131,  111,  112,  113,
  114,   56,   15,   16,  132,   51,   52,  115,  133,   54,
   43,   44,   63,   45,   46,   47,   32,   49,   79,   80,
   81,   82,   83,   84,  179,  180,  181,  182,   68,   85,
   86,   36,   37,   33,   38,   39,   34,   40,   41,   91,
   92,   42,   35,   43,   44,  138,   45,   46,   47,   48,
   49,   58,   50,   59,   51,   52,   53,   61,   54,   93,
   94,   64,   95,   96,   97,   98,   99,  100,  101,  102,
  153,  154,  156,  157,  158,  159,  160,  161,  162,  163,
  164,  165,  166,  167,  168,  169,  170,  171,   65,   66,
   67,  105,  106,  107,  108,  109,  135,  136,  137,  139,
  141,  191,  140,  142,  143,  144,  145,  146,  147,  148,
  149,  155,  189,  172,  173,  150,  151,  152,  175,  176,
  186,  187,  194,  188,  190,  192,  199,    1,  193,  195,
  196,  200,  204,  201,  202,   33,   29,   30,  203,   31,
   32,  134,   28,   83,  198,   90,   15,   21,  101,
};
static const YYINT yycheck[] = {                          2,
   25,  272,   27,   65,   66,   67,  257,  258,  259,  279,
  261,  279,  263,  264,  265,  266,  283,  283,  140,  286,
  286,  279,  273,  145,  313,  314,  303,  279,  150,  151,
  152,  313,  283,  313,  314,  286,  313,  314,  313,  314,
  313,  282,  313,  284,  285,  273,  313,  288,  313,  314,
  291,  292,  303,  294,  313,  314,  297,  263,  264,  265,
  266,  276,  313,  314,  305,  306,  307,  273,  309,  310,
  295,  296,  279,  298,  299,  300,  313,  302,  313,  314,
  313,  314,  313,  314,  146,  147,  148,  149,  314,  313,
  314,  283,  284,  313,  286,  287,  313,  289,  290,  313,
  314,  293,  313,  295,  296,  108,  298,  299,  300,  301,
  302,  263,  304,  313,  306,  307,  308,  313,  310,  313,
  314,  279,  313,  314,  313,  314,  313,  314,  313,  314,
  313,  314,  313,  314,  313,  314,  313,  314,  313,  314,
  313,  314,  313,  314,  313,  314,  313,  314,  279,  279,
  279,  313,  278,  278,  278,  263,  277,  301,  276,  313,
  313,  186,  278,  313,  313,  313,  278,  274,  274,  274,
  274,  313,  175,  314,  260,  278,  278,  278,  262,  274,
  273,  314,  273,  277,  266,  312,  267,    0,  288,  192,
  313,  280,  202,  278,  273,  273,  273,  273,  281,  273,
  273,  103,  277,  273,  194,   48,  278,  278,  277,
};
#define YYFINAL 1
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 315
#define YYUNDFTOKEN 336
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
"AND_TOK","BIT_AND_EQUAL_TOK","BIT_AND_TOK","XOR_TOK","SPACE_TOK","COLON_TOK",
"ID_TOK","INT_CONST_TOK","RIGHT_SHIT_TOK",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : programe",
"programe : function",
"function : function statement",
"function :",
"statement : SEMICOLON_TOK",
"statement : expression SEMICOLON_TOK",
"statement : reserved_word balanced_paran",
"statement : IF_TOK LPAREN_TOK relational_expression RPAREN_TOK statement ELSE_TOK statement",
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
"reserved_word : FOR_TOK LPAREN_TOK INTEGER_TOK ID_TOK EQUAL_TOK INT_CONST_TOK SEMICOLON_TOK relational_expression SEMICOLON_TOK unary_expression RPAREN_TOK",
"reserved_word : WHILE_TOK LPAREN_TOK relational_expression RPAREN_TOK",
"case_blocks : CASE_TOK INT_CONST_TOK COLON_TOK statement BREAK_TOK SEMICOLON_TOK case_blocks",
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
}
void success(void){
	printf("%s\n","PARSED SUCCESSFULLY .......... :)");
}
#line 471 "y.tab.c"

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
#line 677 "y.tab.c"
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
