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
	#define UNINITIALISED_TYPE -1
	int yylex(void);
	extern char* yytext;
	extern FILE* yyin;
	extern int yylineno;
	struct entry{
		int entry_index;
		char var_name;
		int type[10];
		int scope[10];
		int line_no;
		int scope_array_index;
	}symbol_table[122],temp_table[122];

	void insert_by_name(char *name);
	int found(char name[]);
	void display_table(void);
	int check_for_same_scope(struct entry node1,struct entry node2);
	int global_scope = 0;
	int var_buffer[100]; /* max 100 inline var be declared at a time;*/
	int var_buffer_index = 0;
	void init_symbol_table(void);
#line 39 "main.y"
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union{
	struct s2{
		char *name;
	}n;

    struct s3{
    	int i_type;
    }t;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 64 "y.tab.c"

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
#define BREAK_TOK 263
#define DEFAULT_TOK 264
#define RETURN_TOK 265
#define INCLUDE_TOK 266
#define DEFINE_TOK 267
#define MAIN_TOK 268
#define SEMICOLON_TOK 269
#define COMMA_TOK 270
#define DOT_TOK 271
#define LCURLY_TOK 272
#define RCURLY_TOK 273
#define RPAREN_TOK 274
#define LPAREN_TOK 275
#define ARRAY_BRACKET_LTOK 276
#define ARRAY_BRACKET_RTOK 277
#define ADDITION_TOK 278
#define INCREMENT_TOK 279
#define ADDITION_EQUAL_TOK 280
#define MINUS_TOK 281
#define DECREMENT_TOK 282
#define MINUS_EQUAL_TOK 283
#define MULTIPLICATION_TOK 284
#define MULTIPLICATION_EQUAL_TOK 285
#define DIVISION_EQUAL_TOK 286
#define DIVISION_TOK 287
#define MODULO_TOK 288
#define MODULO_EQUAL_TOK 289
#define RIGHT_SHIFT_TOK 290
#define GREATER_THAN_EQUAL_TOK 291
#define GREATER_TOK 292
#define LEFT_SHIFT_TOK 293
#define LESS_THAN_EQUAL_TOK 294
#define LESS_TOK 295
#define EQUAL_COMPARE_TOK 296
#define EQUAL_TOK 297
#define NOT_EQUAL_TOK 298
#define NOT_TOK 299
#define BIT_OR_EQUAL_TOK 300
#define BIT_OR_TOK 301
#define OR_TOK 302
#define AND_TOK 303
#define BIT_AND_EQUAL_TOK 304
#define BIT_AND_TOK 305
#define XOR_TOK 306
#define XOR_EQUAL_TOK 307
#define SPACE_TOK 308
#define COLON_TOK 309
#define ID_TOK 310
#define INT_CONST_TOK 311
#define INTEGER_TOK 312
#define FLOATING_TOK 313
#define DOUBLE_TOK 314
#define CHAR_TOK 315
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    3,    3,    4,    4,    1,    1,    1,    1,    7,
    5,    9,    8,    8,    6,    6,   10,   11,    2,    2,
};
static const YYINT yylen[] = {                            2,
    1,    6,    0,    4,    2,    1,    1,    1,    1,    0,
    5,    0,    4,    0,    2,    0,    2,    2,    3,    1,
};
static const YYINT yydefred[] = {                         0,
    6,    7,    8,    9,    0,    0,    1,    0,    0,    0,
    0,    5,    0,    0,    0,   10,    2,    4,   16,    0,
    0,   12,    0,   15,    0,   20,    0,   16,   11,   17,
    0,    0,   19,   13,
};
static const YYINT yydgoto[] = {                          5,
   21,   27,    7,   11,   22,   20,   19,   23,   28,   24,
   25,
};
static const YYINT yysindex[] = {                      -297,
    0,    0,    0,    0,    0, -265,    0, -271, -297, -305,
 -268,    0, -297, -264, -303,    0,    0,    0,    0, -272,
 -301,    0, -262,    0, -257,    0, -251,    0,    0,    0,
 -290, -272,    0,    0,
};
static const YYINT yyrindex[] = {                        13,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0, -252,
    0,    0,    0,    0,    0,    0, -247,    0,    0,    0,
    0, -252,    0,    0,
};
static const YYINT yygindex[] = {                         0,
    1,    0,    0,    0,    9,   -4,    0,   -7,    0,    0,
    0,
};
#define YYTABLESIZE 43
static const YYINT yytable[] = {                         16,
    6,   13,    8,    9,   12,   14,   18,   16,   26,   10,
   29,   30,    3,   15,    1,    2,    3,    4,   31,   33,
   14,   18,   17,   32,   34,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    1,
    2,    3,    4,
};
static const YYINT yycheck[] = {                        272,
    0,  270,  268,  275,  310,  274,  310,  272,  310,    9,
  273,  269,    0,   13,  312,  313,  314,  315,  270,  310,
  273,  269,   14,   28,   32,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  312,
  313,  314,  315,
};
#define YYFINAL 5
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 315
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
"SWITCH_TOK","CASE_TOK","IF_TOK","ELSE_TOK","BREAK_TOK","DEFAULT_TOK",
"RETURN_TOK","INCLUDE_TOK","DEFINE_TOK","MAIN_TOK","SEMICOLON_TOK","COMMA_TOK",
"DOT_TOK","LCURLY_TOK","RCURLY_TOK","RPAREN_TOK","LPAREN_TOK",
"ARRAY_BRACKET_LTOK","ARRAY_BRACKET_RTOK","ADDITION_TOK","INCREMENT_TOK",
"ADDITION_EQUAL_TOK","MINUS_TOK","DECREMENT_TOK","MINUS_EQUAL_TOK",
"MULTIPLICATION_TOK","MULTIPLICATION_EQUAL_TOK","DIVISION_EQUAL_TOK",
"DIVISION_TOK","MODULO_TOK","MODULO_EQUAL_TOK","RIGHT_SHIFT_TOK",
"GREATER_THAN_EQUAL_TOK","GREATER_TOK","LEFT_SHIFT_TOK","LESS_THAN_EQUAL_TOK",
"LESS_TOK","EQUAL_COMPARE_TOK","EQUAL_TOK","NOT_EQUAL_TOK","NOT_TOK",
"BIT_OR_EQUAL_TOK","BIT_OR_TOK","OR_TOK","AND_TOK","BIT_AND_EQUAL_TOK",
"BIT_AND_TOK","XOR_TOK","XOR_EQUAL_TOK","SPACE_TOK","COLON_TOK","ID_TOK",
"INT_CONST_TOK","INTEGER_TOK","FLOATING_TOK","DOUBLE_TOK","CHAR_TOK",0,0,0,0,0,
0,0,0,0,0,0,0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : programe",
"programe : function",
"function : data_type MAIN_TOK LPAREN_TOK main_args RPAREN_TOK statement_block",
"function :",
"main_args : main_args COMMA_TOK data_type ID_TOK",
"main_args : data_type ID_TOK",
"data_type : INTEGER_TOK",
"data_type : FLOATING_TOK",
"data_type : DOUBLE_TOK",
"data_type : CHAR_TOK",
"$$1 :",
"statement_block : LCURLY_TOK $$1 statement nested_blocks RCURLY_TOK",
"$$2 :",
"nested_blocks : statement_block $$2 statement nested_blocks",
"nested_blocks :",
"statement : statement actual_statement",
"statement :",
"actual_statement : declaration_statement SEMICOLON_TOK",
"declaration_statement : data_type inline_declaration",
"inline_declaration : inline_declaration COMMA_TOK ID_TOK",
"inline_declaration : ID_TOK",

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
#line 111 "main.y"

int main(int argc,const char* argv[]){
	init_symbol_table();
	yyin = fopen(argv[1],"r");
	yyparse();
	return 0;
}
void success(void){
	printf("successfully parsed :)\n");
	display_table();
}
void yyerror(char *s){
	printf("SORRY some syntax error is there. ........ :( . The message: %s\n",s);
	exit(1);
}
void init_symbol_table(void){
	for(int i=0;i <= 122;i++){
		symbol_table[i].entry_index = -1;
	}
}
void insert_by_name(char *name){

	/* store them into temp table*/
	printf(" index: %d, name: %s, scope: %d, line_no: %d\n",name[0],name,global_scope,yylineno);
	int index = name[0];
	temp_table[index].entry_index = index;
	temp_table[index].var_name = name[0];
	memset((void*)temp_table[index].type,-1,sizeof(int)*10);
	temp_table[index].scope[0] = global_scope;
	temp_table[index].line_no = yylineno;
	temp_table[index].scope_array_index = 0;
}
void assign_type(int t){
	/* check for re_decleration and make var_buffer empty*/
	struct entry node;
	for(int i = 0;i < var_buffer_index;i++){
		if(var_buffer[i] >= 0){
			node = symbol_table[var_buffer[i]];
			if(node.var_name == temp_table[var_buffer[i]].var_name){
				if(check_for_same_scope(node,temp_table[var_buffer[i]])){
					yyerror("Variable having same name with same scope");
				}
				else{
					int element = var_buffer[i];
					symbol_table[element].entry_index = element;
					symbol_table[element].var_name = temp_table[element].var_name;
					symbol_table[element].scope[symbol_table[element].scope_array_index] = global_scope;
					symbol_table[element].type[global_scope] = t;
					symbol_table[element].line_no = yylineno;
					symbol_table[element].scope_array_index++;
				}
			}
			else{
					int element = var_buffer[i];
					symbol_table[element].entry_index = element;
					symbol_table[element].var_name = temp_table[element].var_name;
					symbol_table[element].scope[symbol_table[element].scope_array_index] = global_scope;
					symbol_table[element].type[global_scope] = t;
					symbol_table[element].line_no = yylineno;
					symbol_table[element].scope_array_index++;	
			}
		}
		var_buffer[i] = -1;
	}
}
int check_for_same_scope(struct entry node1,struct entry node2){
		/* same scope with same of different data type */
		if (node1.entry_index == -1){
			return 0;
		}
		else{
			int target_scope = node2.scope[0];
			for(int i = 0;i < node1.scope_array_index;i++){
				if(node1.scope[i] == target_scope){
					return 1;
				}
			}
			return 0;
		}
}
void display_table(void){
	for(int i=0;i <= 122;i++){
		if(symbol_table[i].entry_index != -1){
			for(int j=0;j < symbol_table[i].scope_array_index;j++){
				printf("entry_index: %d\tname: %c\ttotal_of_scope_used: %d\ttype = %d in the scope %d\n",symbol_table[i].entry_index,symbol_table[i].var_name,symbol_table[i].scope_array_index,symbol_table[i].type[symbol_table[i].scope[j]],symbol_table[i].scope[j]);
			}
			printf("----------------------------------------------------\n");
		}
	}
}
#line 388 "y.tab.c"

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
#line 55 "main.y"
	{success();}
break;
case 2:
#line 59 "main.y"
	{
		printf("%s = %d and scope = %d\n","main function has been found and its return type is",yystack.l_mark[-5].t.i_type,global_scope);
	}
break;
case 6:
#line 69 "main.y"
	{yyval.t.i_type = 1;}
break;
case 7:
#line 70 "main.y"
	{yyval.t.i_type = 2; }
break;
case 8:
#line 71 "main.y"
	{yyval.t.i_type = 3; }
break;
case 9:
#line 72 "main.y"
	{yyval.t.i_type = 4; }
break;
case 10:
#line 75 "main.y"
	{
		global_scope += 1;
	}
break;
case 12:
#line 80 "main.y"
	{
		global_scope -= 1;
	}
break;
case 18:
#line 96 "main.y"
	{
		assign_type(yystack.l_mark[-1].t.i_type);
	}
break;
case 19:
#line 101 "main.y"
	{
		insert_by_name(yystack.l_mark[0].n.name);
		var_buffer[var_buffer_index++] = yystack.l_mark[0].n.name[0];
	}
break;
case 20:
#line 105 "main.y"
	{
		insert_by_name(yystack.l_mark[0].n.name);
		var_buffer[var_buffer_index++] = yystack.l_mark[0].n.name[0];
	}
break;
#line 648 "y.tab.c"
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
