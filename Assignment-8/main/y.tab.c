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
	#include <string.h>
	int MAX_TEMP_VAR = 20;
	int temp_var_index = 1;
	char temp[2];
	extern FILE* yyin;
	int yylex(void);
	void reset_temp(void);
	void yyerror(char *s);
	extern int yylineno;
	char* gencode(char *var1,char op,char *var2);
	int label = 1;
#line 17 "main.y"
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
#line 50 "y.tab.c"

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
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    6,    9,    9,    7,    7,    3,    3,    3,    3,
    8,   10,   10,    2,    2,   11,   13,   14,   11,    4,
    1,    1,    1,    1,    1,    1,    1,    1,   12,   12,
   12,   12,   12,   12,   12,   12,    5,    5,
};
static const YYINT yylen[] = {                            2,
    1,    7,    7,    0,    4,    2,    1,    1,    1,    1,
    4,    3,    0,    2,    0,    1,    0,    0,    9,    4,
    1,    3,    3,    3,    3,    3,    3,    2,    1,    3,
    3,    3,    3,    3,    3,    3,    1,    1,
};
static const YYINT yydefred[] = {                         0,
    7,    8,    9,   10,    0,    0,    1,    0,    0,    0,
    0,    6,    0,    0,   15,    0,    0,    0,    0,    2,
    5,    0,    0,   16,   15,    0,   14,    0,    0,    0,
    0,   11,    0,   37,   38,    0,    0,    0,   21,    0,
    0,    0,   12,    0,    0,   28,   20,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   17,
    0,   27,    0,    0,   24,   25,   26,   36,   31,   30,
   33,   32,   34,   35,    0,    0,    0,    3,   18,    0,
   19,
};
static const YYINT yydgoto[] = {                          5,
   38,   18,   10,   24,   39,    7,   11,   25,   20,   26,
   27,   42,   75,   80,
};
static const YYINT yysindex[] = {                      -184,
    0,    0,    0,    0,    0, -258,    0, -249, -184, -241,
 -206,    0, -245, -184,    0, -184, -216, -201, -213,    0,
    0, -236, -182,    0,    0, -205,    0, -181, -215, -215,
 -201,    0, -184,    0,    0, -215, -215, -219,    0, -262,
 -194, -202,    0, -197, -200,    0,    0, -215, -215, -215,
 -215, -215, -235, -235, -235, -235, -235, -235, -235,    0,
 -245,    0, -196, -196,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0, -245, -184, -172,    0,    0, -245,
    0,
};
static const YYINT yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   96,    0, -168,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
 -168,    0,    0,    0,    0,    0,    0,    0,    0,    0,
 -188,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0, -256, -222,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   96,    0,    0,    0,    0,
    0,
};
static const YYINT yygindex[] = {                         0,
  -16,   73,    1,    0,  -28,    0,   66,  -13,   24,   70,
    0,    0,    0,    0,
};
#define YYTABLESIZE 101
static const YYINT yytable[] = {                         16,
    6,   41,   22,    8,   22,   48,   49,   50,   51,   52,
    9,   22,   22,   40,   17,   12,   19,   53,   15,   45,
   46,   34,   35,   22,   68,   69,   70,   71,   72,   73,
   74,   63,   64,   65,   66,   67,   23,   29,   23,   47,
   21,   34,   35,   28,   36,   23,   23,   76,   48,   49,
   50,   51,   52,   37,   13,   22,   14,   23,   60,   32,
   62,   77,   15,   61,   23,   14,   81,   48,   49,   50,
   51,   52,   29,   50,   51,   52,   19,   30,   33,   21,
   21,   21,   21,   21,   54,   55,   56,   57,   58,   59,
    1,    2,    3,    4,   79,    4,   13,   31,   44,   78,
   43,
};
static const YYINT yycheck[] = {                         13,
    0,   30,  259,  262,  261,  268,  269,  270,  271,  272,
  260,  268,  269,   30,   14,  257,   16,  280,  264,   36,
   37,  257,  258,  280,   53,   54,   55,   56,   57,   58,
   59,   48,   49,   50,   51,   52,  259,  274,  261,  259,
  257,  257,  258,  257,  260,  268,  269,   61,  268,  269,
  270,  271,  272,  269,  261,  257,  263,  280,  261,  265,
  261,   75,  264,  261,  266,  263,   80,  268,  269,  270,
  271,  272,  261,  270,  271,  272,   76,  260,  260,  268,
  269,  270,  271,  272,  279,  280,  281,  282,  283,  284,
  275,  276,  277,  278,  267,    0,  265,   25,   33,   76,
   31,
};
#define YYFINAL 5
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 285
#define YYUNDFTOKEN 302
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"ID_TOK","INT_CONST_TOK",
"SEMICOLON_TOK","LPAREN_TOK","RPAREN_TOK","MAIN_TOK","COMMA_TOK","LCURLY_TOK",
"RCURLY_TOK","IF_TOK","ELSE_TOK","ADDITION_TOK","MINUS_TOK",
"MULTIPLICATION_TOK","DIVISION_TOK","MODULO_TOK","UNARY_MINUS_CONST_TOK",
"EQUAL_TOK","INTEGER_TOK","FLOATING_TOK","DOUBLE_TOK","CHAR_TOK","LESS_TOK",
"LESS_THAN_EQUAL_TOK","GREATER_TOK","GREATER_THAN_EQUAL_TOK",
"EQUAL_COMPARE_TOK","NOT_EQUAL_TOK","UMINUS_TOK",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : programe",
"programe : function",
"function : data_type MAIN_TOK LPAREN_TOK func_args RPAREN_TOK statement_block function_declr",
"function_declr : data_type ID_TOK LPAREN_TOK func_args RPAREN_TOK statement_block function_declr",
"function_declr :",
"func_args : func_args COMMA_TOK data_type ID_TOK",
"func_args : data_type ID_TOK",
"data_type : INTEGER_TOK",
"data_type : FLOATING_TOK",
"data_type : DOUBLE_TOK",
"data_type : CHAR_TOK",
"statement_block : LCURLY_TOK statement nested_blocks RCURLY_TOK",
"nested_blocks : statement_block statement nested_blocks",
"nested_blocks :",
"statement : statement actual_statement",
"statement :",
"actual_statement : assignment_expression",
"$$1 :",
"$$2 :",
"actual_statement : IF_TOK LPAREN_TOK relational_expression RPAREN_TOK $$1 statement_block ELSE_TOK $$2 statement_block",
"assignment_expression : ID_TOK EQUAL_TOK arith_expression SEMICOLON_TOK",
"arith_expression : operand",
"arith_expression : arith_expression ADDITION_TOK arith_expression",
"arith_expression : arith_expression MINUS_TOK arith_expression",
"arith_expression : arith_expression MULTIPLICATION_TOK arith_expression",
"arith_expression : arith_expression DIVISION_TOK arith_expression",
"arith_expression : arith_expression MODULO_TOK arith_expression",
"arith_expression : LPAREN_TOK arith_expression RPAREN_TOK",
"arith_expression : MINUS_TOK arith_expression",
"relational_expression : operand",
"relational_expression : operand LESS_THAN_EQUAL_TOK operand",
"relational_expression : operand LESS_TOK operand",
"relational_expression : operand GREATER_THAN_EQUAL_TOK operand",
"relational_expression : operand GREATER_TOK operand",
"relational_expression : operand EQUAL_COMPARE_TOK operand",
"relational_expression : operand NOT_EQUAL_TOK operand",
"relational_expression : arith_expression LESS_THAN_EQUAL_TOK operand",
"operand : ID_TOK",
"operand : INT_CONST_TOK",

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
#line 122 "main.y"
int main(int argc,const char* argv[]){
	yyin = fopen(argv[1],"r");
	yyparse();
	return 1;
}
void yyerror(char *s){
	printf("Error: %s in lineno: %d\n",s,yylineno);
}
char* gencode(char *var1,char op,char *var2){
	printf("Label: %d --> var1: %s, var2: %s, operation: %c\n",label,var1,var2,op);
	char t[MAX_TEMP_VAR];
	sprintf(t,"%d",temp_var_index);
	temp_var_index++;
	strcat(temp,t);
	label++;
	return temp;
}
void reset_temp(void){
	temp[0] = 't';
	temp[1] = '\0';
}
#line 318 "y.tab.c"

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
#line 40 "main.y"
	{printf("Successfully parsed\n");}
break;
case 2:
#line 43 "main.y"
	{}
break;
case 3:
#line 46 "main.y"
	{}
break;
case 5:
#line 50 "main.y"
	{}
break;
case 6:
#line 51 "main.y"
	{}
break;
case 7:
#line 54 "main.y"
	{yyval.A.i_type = 1;}
break;
case 8:
#line 55 "main.y"
	{yyval.A.i_type = 2; }
break;
case 9:
#line 56 "main.y"
	{yyval.A.i_type = 3; }
break;
case 10:
#line 57 "main.y"
	{yyval.A.i_type = 4; }
break;
case 11:
#line 60 "main.y"
	{}
break;
case 12:
#line 63 "main.y"
	{}
break;
case 14:
#line 68 "main.y"
	{}
break;
case 16:
#line 72 "main.y"
	{}
break;
case 17:
#line 73 "main.y"
	{printf("GOTO_LABEL(IF): %d\n",label);}
break;
case 18:
#line 73 "main.y"
	{printf("GOTO_LABEL(ELSE): %d\n",label);}
break;
case 20:
#line 76 "main.y"
	{
			strcpy(yystack.l_mark[-3].A.i_name,yystack.l_mark[-1].A.i_name);
			strcpy(yyval.A.i_name,yystack.l_mark[-1].A.i_name);
		}
break;
case 21:
#line 82 "main.y"
	{yyval.A = yystack.l_mark[0].A;}
break;
case 22:
#line 83 "main.y"
	{
			reset_temp();
			strcpy(yyval.A.i_name,gencode(yystack.l_mark[-2].A.i_name,'+',yystack.l_mark[0].A.i_name));
		}
break;
case 23:
#line 87 "main.y"
	{
			reset_temp();
			strcpy(yyval.A.i_name,gencode(yystack.l_mark[-2].A.i_name,'-',yystack.l_mark[0].A.i_name));
		}
break;
case 24:
#line 91 "main.y"
	{
			reset_temp();
			strcpy(yyval.A.i_name,gencode(yystack.l_mark[-2].A.i_name,'*',yystack.l_mark[0].A.i_name));
		}
break;
case 25:
#line 95 "main.y"
	{
			reset_temp();
			strcpy(yyval.A.i_name,gencode(yystack.l_mark[-2].A.i_name,'/',yystack.l_mark[0].A.i_name));
		}
break;
case 26:
#line 99 "main.y"
	{
			reset_temp();
			strcpy(yyval.A.i_name,gencode(yystack.l_mark[-2].A.i_name,'%',yystack.l_mark[0].A.i_name));
		}
break;
case 27:
#line 103 "main.y"
	{yyval.A = yystack.l_mark[-1].A;}
break;
case 28:
#line 104 "main.y"
	{yyval.A = yystack.l_mark[0].A;}
break;
case 37:
#line 118 "main.y"
	{strcpy(yyval.A.i_name,yystack.l_mark[0].A.i_name);}
break;
case 38:
#line 119 "main.y"
	{strcpy(yyval.A.i_name,yystack.l_mark[0].A.i_name);}
break;
#line 642 "y.tab.c"
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
