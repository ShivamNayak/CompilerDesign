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
#define SEMICOLON_TOK 272
#define COMMA_TOK 273
#define DOT_TOK 274
#define LCURLY_TOK 275
#define RCURLY_TOK 276
#define RPAREN_TOK 277
#define LPAREN_TOK 278
#define ARRAY_BRACKET_LTOK 279
#define ARRAY_BRACKET_RTOK 280
#define ADDITION_TOK 281
#define INCREMENT_TOK 282
#define ADDITION_EQUAL_TOK 283
#define MINUS_TOK 284
#define DECREMENT_TOK 285
#define MINUS_EQUAL_TOK 286
#define MULTIPLICATION_TOK 287
#define MULTIPLICATION_EQUAL_TOK 288
#define DIVISION_EQUAL_TOK 289
#define DIVISION_TOK 290
#define MODULO_TOK 291
#define MODULO_EQUAL_TOK 292
#define RIGHT_SHIFT_TOK 293
#define GREATER_THAN_EQUAL_TOK 294
#define GREATER_TOK 295
#define LEFT_SHIFT_TOK 296
#define LESS_THAN_EQUAL_TOK 297
#define LESS_TOK 298
#define EQUAL_COMPARE_TOK 299
#define EQUAL_TOK 300
#define NOT_EQUAL_TOK 301
#define NOT_TOK 302
#define BIT_OR_EQUAL_TOK 303
#define BIT_OR_TOK 304
#define OR_TOK 305
#define AND_TOK 306
#define BIT_AND_EQUAL_TOK 307
#define BIT_AND_TOK 308
#define XOR_TOK 309
#define SPACE_TOK 310
#define COLON_TOK 311
#define ID_TOK 312
#define INT_CONST_TOK 313
#define RIGHT_SHIT_TOK 314
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    1,    1,    2,    2,    2,    2,    2,    5,    8,
    8,    3,    3,    3,    3,    3,    3,    3,    3,    3,
    3,    3,    3,   10,   10,   10,   10,   10,   10,   10,
   10,   10,   10,   10,   10,   10,   10,   10,   10,   10,
   10,   10,   10,   10,   10,   10,   10,   10,    6,    6,
    6,    6,    6,    6,    6,    6,    6,    6,    6,    6,
   11,   11,   11,   11,   12,   12,   12,   12,   12,   12,
   12,    9,    9,    4,    4,    7,    7,
};
static const YYINT yylen[] = {                            2,
    1,    2,    0,    1,    2,    2,    7,    7,    3,    2,
    0,    2,    2,    2,    2,    1,    1,    1,    3,    1,
    1,    3,    1,    3,    3,    3,    3,    3,    3,    3,
    3,    3,    3,    3,    3,    3,    3,    3,    3,    3,
    3,    3,    3,    3,    3,    3,    3,    3,    3,    3,
    3,    3,    3,    3,    3,    3,    3,    3,    3,    3,
    2,    2,    2,    2,    3,    3,    3,    3,    3,    3,
    2,    3,    3,   11,    4,    7,    0,
};
static const YYINT yydefred[] = {                         3,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    4,    0,    0,    0,    0,   17,    2,    0,    0,   20,
   18,   21,   23,    0,    0,    0,    0,   12,   13,   14,
   15,   63,   64,   71,   61,   62,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    5,    0,    6,    0,
    0,    0,    0,    0,   49,   53,   50,   54,   51,   55,
   52,   56,   57,   58,    0,   73,   19,   22,   59,   60,
   65,   68,   66,   69,   67,   70,    0,    0,    0,   75,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   10,    9,
    0,    0,    0,   24,   31,   32,   25,   33,   34,   26,
   35,   36,   37,   38,   27,   28,   39,   40,   29,   30,
   41,   43,   45,   47,   42,   44,   46,   48,    0,    0,
    0,    0,    0,    0,    8,    7,    0,    0,    0,    0,
    0,    0,    0,   74,    0,   76,
};
static const YYINT yydgoto[] = {                          1,
    2,   77,   18,   19,   49,   20,  131,   78,   21,   67,
   22,   23,
};
static const YYINT yysindex[] = {                         0,
    0, -253, -276, -271, -269, -256, -296, -288, -272, -266,
    0, -259, -250, -233, -264,    0,    0, -229, -210,    0,
    0,    0,    0, -171, -198, -197, -198,    0,    0,    0,
    0,    0,    0,    0,    0,    0, -285, -274, -257, -255,
 -238, -287, -235, -231, -222, -219,    0, -253,    0, -196,
 -247, -160, -159, -158,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0, -220,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0, -253, -156, -179,    0,
 -153, -253, -189, -217, -188, -215, -187, -213, -211, -186,
 -185, -209, -184, -183, -207, -205, -202, -200,    0,    0,
 -182, -128, -129,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0, -138, -178,
 -139, -253, -198, -173,    0,    0, -133, -253, -268, -127,
 -262, -136, -130,    0, -128,    0,
};
static const YYINT yyrindex[] = {                         0,
    0,  143,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0, -126,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0, -132,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0, -125,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0, -132,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0, -131,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0, -131,    0,
};
static const YYINT yygindex[] = {                         0,
    0,   -2,    0,    0,    0,  -24,    3,   72,    0,    0,
   11,  109,
};
#define YYTABLESIZE 151
static const YYINT yytable[] = {                         17,
   52,   24,   54,    3,    4,    5,   25,    6,   26,    7,
    8,    9,   10,   12,   14,   28,   13,   35,   11,   35,
   36,   27,   36,   29,   65,   66,   55,   56,   12,   37,
   38,   13,   39,   40,   41,   42,   43,   57,   58,   30,
   44,   45,   47,  141,   46,   31,   37,   38,   14,   39,
   40,   41,   32,   43,   59,   60,   61,   62,   15,   16,
   83,   33,   84,   85,   48,   86,   87,   88,   89,   90,
   91,   92,   93,   63,   64,   94,   69,   70,   34,  103,
   71,   72,   95,   96,   44,   45,   97,   98,   46,   73,
   74,   50,   75,   76,  105,  106,  108,  109,  111,  112,
  113,  114,  117,  118,  121,  122,  123,  124,  137,  125,
  126,  127,  128,   51,   53,   79,   80,   81,   82,  100,
  101,  102,  104,  107,  110,  115,  116,  119,  120,  136,
  129,  130,  132,  133,  134,  140,  135,  138,  139,  143,
  144,  145,    1,   11,   77,   16,   72,  146,   99,  142,
   68,
};
static const YYINT yycheck[] = {                          2,
   25,  278,   27,  257,  258,  259,  278,  261,  278,  263,
  264,  265,  266,  282,  302,  312,  285,  282,  272,  282,
  285,  278,  285,  312,  312,  313,  312,  313,  282,  294,
  295,  285,  297,  298,  299,  300,  301,  312,  313,  312,
  305,  306,  272,  312,  309,  312,  294,  295,  302,  297,
  298,  299,  312,  301,  312,  313,  312,  313,  312,  313,
  281,  312,  283,  284,  275,  286,  287,  288,  289,  290,
  291,  292,  293,  312,  313,  296,  312,  313,  312,   82,
  312,  313,  303,  304,  305,  306,  307,  308,  309,  312,
  313,  263,  312,  313,  312,  313,  312,  313,  312,  313,
  312,  313,  312,  313,  312,  313,  312,  313,  133,  312,
  313,  312,  313,  312,  312,  312,  277,  277,  277,  276,
  300,  275,  312,  312,  312,  312,  312,  312,  312,  132,
  313,  260,  262,  272,  313,  138,  276,  311,  272,  267,
  277,  272,    0,  276,  276,  272,  272,  145,   77,  139,
   42,
};
#define YYFINAL 1
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 314
#define YYUNDFTOKEN 329
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
"DEFINE_TOK","SEMICOLON_TOK","COMMA_TOK","DOT_TOK","LCURLY_TOK","RCURLY_TOK",
"RPAREN_TOK","LPAREN_TOK","ARRAY_BRACKET_LTOK","ARRAY_BRACKET_RTOK",
"ADDITION_TOK","INCREMENT_TOK","ADDITION_EQUAL_TOK","MINUS_TOK","DECREMENT_TOK",
"MINUS_EQUAL_TOK","MULTIPLICATION_TOK","MULTIPLICATION_EQUAL_TOK",
"DIVISION_EQUAL_TOK","DIVISION_TOK","MODULO_TOK","MODULO_EQUAL_TOK",
"RIGHT_SHIFT_TOK","GREATER_THAN_EQUAL_TOK","GREATER_TOK","LEFT_SHIFT_TOK",
"LESS_THAN_EQUAL_TOK","LESS_TOK","EQUAL_COMPARE_TOK","EQUAL_TOK",
"NOT_EQUAL_TOK","NOT_TOK","BIT_OR_EQUAL_TOK","BIT_OR_TOK","OR_TOK","AND_TOK",
"BIT_AND_EQUAL_TOK","BIT_AND_TOK","XOR_TOK","SPACE_TOK","COLON_TOK","ID_TOK",
"INT_CONST_TOK","RIGHT_SHIT_TOK",0,0,0,0,0,0,0,0,0,0,0,0,0,0,"illegal-symbol",
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
"arith_expression : ID_TOK RIGHT_SHIFT_TOK ID_TOK",
"arith_expression : ID_TOK LEFT_SHIFT_TOK ID_TOK",
"arith_expression : ID_TOK ADDITION_EQUAL_TOK ID_TOK",
"arith_expression : ID_TOK ADDITION_EQUAL_TOK INT_CONST_TOK",
"arith_expression : ID_TOK MINUS_EQUAL_TOK ID_TOK",
"arith_expression : ID_TOK MINUS_EQUAL_TOK INT_CONST_TOK",
"arith_expression : ID_TOK MULTIPLICATION_EQUAL_TOK ID_TOK",
"arith_expression : ID_TOK MULTIPLICATION_EQUAL_TOK INT_CONST_TOK",
"arith_expression : ID_TOK DIVISION_EQUAL_TOK ID_TOK",
"arith_expression : ID_TOK DIVISION_EQUAL_TOK INT_CONST_TOK",
"arith_expression : ID_TOK MODULO_EQUAL_TOK ID_TOK",
"arith_expression : ID_TOK MODULO_EQUAL_TOK INT_CONST_TOK",
"arith_expression : ID_TOK BIT_OR_EQUAL_TOK ID_TOK",
"arith_expression : ID_TOK BIT_AND_EQUAL_TOK ID_TOK",
"arith_expression : ID_TOK BIT_OR_EQUAL_TOK INT_CONST_TOK",
"arith_expression : ID_TOK BIT_AND_EQUAL_TOK INT_CONST_TOK",
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
#line 131 "main.y"

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
#line 411 "y.tab.c"

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
#line 617 "y.tab.c"
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
