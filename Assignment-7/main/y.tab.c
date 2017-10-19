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
	int global_scope = 0;
	int var_buffer[100]; /* max 100 inline var be declared at a time;*/
	int var_buffer_index = 0;
	int scope_adjust = 0;
	struct entry{
		int entry_index;
		char var_name;
		int type[10];
		int scope[10];
		int line_no;
		int scope_array_index;
		int global_flag;
	}symbol_table[122],temp_table[122];

	void insert_by_name(char *name);
	int found(char *name);
	void display_table(void);
	int check_for_same_scope(struct entry node1,struct entry node2);
	void check_scope_declaration(char *name);
	int check_type(char *name1,char *name2);
	void init_symbol_table(void);
	void check_type_assign(char *name,int type,int scope);
	int min(int a,int b);

#line 46 "main.y"
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union{
	struct s2{
		char *name;
		int i_type;
	}n;

    struct s3{
    	int i_type;
    }t;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 72 "y.tab.c"

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
    0,    5,    5,    5,    7,    7,    1,    1,    1,    1,
   10,   12,    8,   11,   11,    9,    9,   13,   13,   13,
   13,   13,   17,   17,    2,    2,    2,    2,    2,    2,
    2,    2,    2,    2,   15,   15,   15,   15,   15,   15,
   15,   16,   16,   16,   16,    4,    4,    6,   14,    3,
    3,
};
static const YYINT yylen[] = {                            2,
    1,    3,    6,    0,    4,    2,    1,    1,    1,    1,
    0,    0,    6,    3,    0,    2,    0,    2,    5,   11,
    7,    1,    4,    4,    3,    3,    3,    3,    3,    3,
    3,    3,    3,    3,    3,    3,    3,    3,    3,    3,
    3,    2,    2,    2,    2,    1,    1,    2,    2,    3,
    1,
};
static const YYINT yydefred[] = {                         0,
    7,    8,    9,   10,    0,    0,    1,    0,    0,   51,
    0,    0,    0,    0,    2,    0,    0,   50,    6,    0,
    0,    0,   11,    3,    5,   17,    0,    0,    0,    0,
    0,    0,   17,   12,   16,    0,   22,    0,    0,    0,
    0,    0,    0,    0,   18,    0,    0,    0,   46,   47,
    0,    0,    0,    0,    0,    0,   14,   13,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   23,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   24,    0,   41,   35,   36,   37,   38,   39,   40,   19,
    0,   34,   25,   26,   27,   28,   29,   30,   31,   32,
   33,    0,    0,    0,   21,    0,    0,    0,    0,    0,
   44,   45,   42,   43,    0,   20,
};
static const YYINT yydgoto[] = {                          5,
   32,   55,   11,   51,    7,    8,   17,   33,   27,   26,
   34,   44,   35,   36,   52,  110,   37,
};
static const YYINT yysindex[] = {                      -302,
    0,    0,    0,    0,    0, -264,    0, -254, -267,    0,
 -250, -302, -302, -278,    0, -276, -251,    0,    0, -302,
 -227, -256,    0,    0,    0,    0, -255, -219, -211, -208,
 -224, -235,    0,    0,    0, -262,    0, -302, -261, -261,
 -259, -250, -255, -197,    0, -231, -214, -261,    0,    0,
 -199, -193, -190, -259, -182, -216,    0,    0, -181, -221,
 -183, -241, -241, -241, -241, -241, -241, -227, -227, -176,
    0, -241, -241, -241, -241, -241, -241, -241, -241, -241,
    0, -169,    0,    0,    0,    0,    0,    0,    0,    0,
 -161,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0, -261, -227, -167,    0, -257, -207, -206, -258, -168,
    0,    0,    0,    0, -227,    0,
};
static const YYINT yyrindex[] = {                       105,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
 -162,  105,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0, -165,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0, -236, -165,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,
};
static const YYINT yygindex[] = {                         0,
   66,   55,   78,  -36,   99,    0,    0,  -21,   79,    0,
   70,    0,    0,   76,  -39,    0,    0,
};
#define YYTABLESIZE 114
static const YYINT yytable[] = {                         24,
   53,   28,   29,    9,   56,   30,   45,   13,   61,    1,
    2,    3,    4,   48,   12,   54,   23,   56,   20,   14,
  113,  107,   21,  114,  108,   84,   85,   86,   87,   88,
   89,   18,   49,   19,   46,   93,   94,   95,   96,   97,
   98,   99,  100,  101,   23,   10,   90,   91,   49,   50,
   49,   50,  109,   25,   31,   38,    1,    2,    3,    4,
   49,   72,  104,   39,   73,    6,   40,   74,   49,   50,
   75,   76,   41,   77,   10,   58,   78,    6,   16,   59,
   68,  105,   60,   69,   79,   22,   71,   81,   80,   82,
   83,   62,   63,  116,   64,   65,   66,   92,   67,  102,
  103,  106,  111,  112,    4,  115,   48,   15,   70,   42,
   15,   43,   57,   47,
};
static const YYINT yycheck[] = {                         21,
   40,  257,  258,  268,   41,  261,  269,  275,   48,  312,
  313,  314,  315,  275,  269,  275,  272,   54,  270,  270,
  279,  279,  274,  282,  282,   62,   63,   64,   65,   66,
   67,  310,  269,  310,  297,   72,   73,   74,   75,   76,
   77,   78,   79,   80,  272,  310,   68,   69,  310,  311,
  310,  311,  310,  310,  310,  275,  312,  313,  314,  315,
  297,  278,  102,  275,  281,    0,  275,  284,  310,  311,
  287,  288,  297,  290,  310,  273,  293,   12,   13,  311,
  274,  103,  297,  274,  301,   20,  269,  269,  305,  311,
  274,  291,  292,  115,  294,  295,  296,  274,  298,  269,
  262,  269,  310,  310,    0,  274,  269,  273,   54,   32,
   12,   33,   43,   38,
};
#define YYFINAL 5
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 315
#define YYUNDFTOKEN 335
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
0,0,0,0,0,0,0,0,0,0,0,0,0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : programe",
"programe : function",
"function : global_declaration_statement SEMICOLON_TOK function",
"function : data_type MAIN_TOK LPAREN_TOK main_args RPAREN_TOK statement_block",
"function :",
"main_args : main_args COMMA_TOK data_type ID_TOK",
"main_args : data_type ID_TOK",
"data_type : INTEGER_TOK",
"data_type : FLOATING_TOK",
"data_type : DOUBLE_TOK",
"data_type : CHAR_TOK",
"$$1 :",
"$$2 :",
"statement_block : LCURLY_TOK $$1 statement nested_blocks $$2 RCURLY_TOK",
"nested_blocks : statement_block statement nested_blocks",
"nested_blocks :",
"statement : statement actual_statement",
"statement :",
"actual_statement : declaration_statement SEMICOLON_TOK",
"actual_statement : WHILE_TOK LPAREN_TOK relational_expression RPAREN_TOK statement_block",
"actual_statement : FOR_TOK LPAREN_TOK declaration_statement EQUAL_TOK INT_CONST_TOK SEMICOLON_TOK relational_expression SEMICOLON_TOK unary_expression RPAREN_TOK statement_block",
"actual_statement : IF_TOK LPAREN_TOK relational_expression RPAREN_TOK statement_block ELSE_TOK statement_block",
"actual_statement : assignment_expression",
"assignment_expression : ID_TOK EQUAL_TOK arith_expression SEMICOLON_TOK",
"assignment_expression : declaration_statement EQUAL_TOK INT_CONST_TOK SEMICOLON_TOK",
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
"operand : ID_TOK",
"operand : INT_CONST_TOK",
"global_declaration_statement : data_type inline_declaration",
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
#line 213 "main.y"

int main(int argc,const char* argv[]){
	init_symbol_table();
	yyin = fopen(argv[1],"r");
	yyparse();
	return 0;
}
void success(void){
	printf("\t\t\tSUCCESSFULLY PARSED :)\n");
	display_table();
}
void yyerror(char *s){
	printf("SORRY SOME SYNTAX ERROR IS THERE ........ :( . THE MESSEGE: %s\n",s);
	display_table();
	exit(1);
}
void init_symbol_table(void){
	for(int i=0;i <= 122;i++){
		symbol_table[i].entry_index = -1;
	}
}
void insert_by_name(char *name){

	/* store them into temp table*/

	int index = name[0];
	temp_table[index].entry_index = index;
	temp_table[index].var_name = name[0];
	memset((void*)temp_table[index].type,-1,sizeof(int)*10);
	temp_table[index].scope[0] = global_scope;
	temp_table[index].line_no = yylineno;
	temp_table[index].scope_array_index = 0;
}
void assign_type(int t,int flag){
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
					if(flag == 0 && symbol_table[element].global_flag != 1){
						symbol_table[element].global_flag = 0;
					}
					else{
						symbol_table[element].global_flag = 1;
					}
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
					if(flag == 0 && symbol_table[element].global_flag != 1){
						symbol_table[element].global_flag = 0;
					}
					else{
						symbol_table[element].global_flag = 1;
					}
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
				printf("index: %d name: %c total_of_scope_used: %d type = %d in the scope %d global_flag: %d\n",symbol_table[i].entry_index,symbol_table[i].var_name,symbol_table[i].scope_array_index,symbol_table[i].type[symbol_table[i].scope[j]],symbol_table[i].scope[j],symbol_table[i].global_flag);
			}
			printf("----------------------------------------------------------------------------------------------------\n");
		}
	}
}
void check_scope_declaration(char *name){
	if(found(name)){
		if(symbol_table[(int)name[0]].global_flag){
			return;
		}
		/*
		for(int i=0;i<symbol_table[(int)name[0]].scope_array_index;i++){
			if(symbol_table[(int)name[0]].scope[i] <= global_scope){
				return;
			}
		}
		yyerror("Beyond scope usage");*/
		return;
	}
	yyerror("Un-declared till now");
}
int found(char *name){
	return symbol_table[(int)name[0]].entry_index != -1;
}
int  check_type(char *name1,char *name2){
	printf("checking type of %s %s\n",name1,name2);
	for(int i = 0; i < symbol_table[(int)name1[0]].scope_array_index;i++){
		for(int j = 0; j < symbol_table[(int)name2[0]].scope_array_index;j++){
			if (symbol_table[(int)name1[0]].type[symbol_table[(int)name1[0]].scope[i]] == symbol_table[(int)name2[0]].type[symbol_table[(int)name2[0]].scope[j]] && symbol_table[(int)name1[0]].type[symbol_table[(int)name1[0]].scope[i]] != 0 )
				return symbol_table[(int)name1[0]].type[symbol_table[(int)name1[0]].scope[i]];
		}
	}
	yyerror("Mismatched Type");
}
void check_type_assign(char *name,int type,int scope){
	if (symbol_table[(int)name[0]].type[scope] != type){
		printf("%s is of type %d and expression is of type %d in the scope %d\n",name,symbol_table[(int)name[0]].type[scope],type,scope);
		yyerror("Mismatch type of assignment expression");
	}
	return;
}
int min(int a,int b){
	if (a > b)
		return b;
	return a;
}
#line 529 "y.tab.c"

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
#line 63 "main.y"
	{success();}
break;
case 3:
#line 68 "main.y"
	{
		printf("%s = %d and scope = %d\n","main function has been found and its return type is",yystack.l_mark[-5].t.i_type,global_scope);
	}
break;
case 7:
#line 80 "main.y"
	{yyval.t.i_type = 1;}
break;
case 8:
#line 81 "main.y"
	{yyval.t.i_type = 2; }
break;
case 9:
#line 82 "main.y"
	{yyval.t.i_type = 3; }
break;
case 10:
#line 83 "main.y"
	{yyval.t.i_type = 4; }
break;
case 11:
#line 87 "main.y"
	{
		global_scope += 1;
	}
break;
case 12:
#line 89 "main.y"
	{
		global_scope -= 1;
	}
break;
case 23:
#line 113 "main.y"
	{
		check_scope_declaration(yystack.l_mark[-3].n.name);
		check_type_assign(yystack.l_mark[-3].n.name,yystack.l_mark[-1].t.i_type,global_scope);}
break;
case 24:
#line 116 "main.y"
	{printf("Declaration statement is correctly parsed at line no %d\n",yylineno);}
break;
case 25:
#line 120 "main.y"
	{
		check_scope_declaration(yystack.l_mark[-2].n.name);
		check_scope_declaration(yystack.l_mark[0].n.name);
		yyval.t.i_type = check_type(yystack.l_mark[-2].n.name,yystack.l_mark[0].n.name);
	}
break;
case 26:
#line 125 "main.y"
	{
		check_scope_declaration(yystack.l_mark[-2].n.name);
		check_scope_declaration(yystack.l_mark[0].n.name);
		yyval.t.i_type = check_type(yystack.l_mark[-2].n.name,yystack.l_mark[0].n.name);
	}
break;
case 27:
#line 130 "main.y"
	{
		check_scope_declaration(yystack.l_mark[-2].n.name);
		check_scope_declaration(yystack.l_mark[0].n.name);
		yyval.t.i_type = check_type(yystack.l_mark[-2].n.name,yystack.l_mark[0].n.name);
	}
break;
case 28:
#line 135 "main.y"
	{
		check_scope_declaration(yystack.l_mark[-2].n.name);
		check_scope_declaration(yystack.l_mark[0].n.name);
		yyval.t.i_type = check_type(yystack.l_mark[-2].n.name,yystack.l_mark[0].n.name);
	}
break;
case 29:
#line 140 "main.y"
	{
		check_scope_declaration(yystack.l_mark[-2].n.name);
		check_scope_declaration(yystack.l_mark[0].n.name);
		yyval.t.i_type = check_type(yystack.l_mark[-2].n.name,yystack.l_mark[0].n.name);
	}
break;
case 30:
#line 145 "main.y"
	{
		check_scope_declaration(yystack.l_mark[-2].n.name);
		check_scope_declaration(yystack.l_mark[0].n.name);
		yyval.t.i_type = check_type(yystack.l_mark[-2].n.name,yystack.l_mark[0].n.name);
	}
break;
case 31:
#line 150 "main.y"
	{
		check_scope_declaration(yystack.l_mark[-2].n.name);
		check_scope_declaration(yystack.l_mark[0].n.name);
		yyval.t.i_type = check_type(yystack.l_mark[-2].n.name,yystack.l_mark[0].n.name);
	}
break;
case 32:
#line 155 "main.y"
	{
		check_scope_declaration(yystack.l_mark[-2].n.name);
		check_scope_declaration(yystack.l_mark[0].n.name);
		yyval.t.i_type = check_type(yystack.l_mark[-2].n.name,yystack.l_mark[0].n.name);
	}
break;
case 33:
#line 160 "main.y"
	{
		check_scope_declaration(yystack.l_mark[-2].n.name);
		check_scope_declaration(yystack.l_mark[0].n.name);
		yyval.t.i_type = check_type(yystack.l_mark[-2].n.name,yystack.l_mark[0].n.name);
	}
break;
case 34:
#line 165 "main.y"
	{}
break;
case 35:
#line 169 "main.y"
	{check_scope_declaration(yystack.l_mark[-2].n.name);}
break;
case 36:
#line 170 "main.y"
	{check_scope_declaration(yystack.l_mark[-2].n.name);}
break;
case 37:
#line 171 "main.y"
	{check_scope_declaration(yystack.l_mark[-2].n.name);}
break;
case 38:
#line 172 "main.y"
	{check_scope_declaration(yystack.l_mark[-2].n.name);}
break;
case 39:
#line 173 "main.y"
	{check_scope_declaration(yystack.l_mark[-2].n.name);}
break;
case 40:
#line 174 "main.y"
	{check_scope_declaration(yystack.l_mark[-2].n.name);}
break;
case 42:
#line 179 "main.y"
	{check_scope_declaration(yystack.l_mark[-1].n.name);}
break;
case 43:
#line 180 "main.y"
	{check_scope_declaration(yystack.l_mark[-1].n.name);}
break;
case 44:
#line 181 "main.y"
	{check_scope_declaration(yystack.l_mark[0].n.name);}
break;
case 45:
#line 182 "main.y"
	{check_scope_declaration(yystack.l_mark[0].n.name);}
break;
case 46:
#line 186 "main.y"
	{}
break;
case 47:
#line 187 "main.y"
	{}
break;
case 48:
#line 191 "main.y"
	{
		assign_type(yystack.l_mark[-1].t.i_type,1);
	}
break;
case 49:
#line 197 "main.y"
	{
		assign_type(yystack.l_mark[-1].t.i_type,0);
	}
break;
case 50:
#line 203 "main.y"
	{
		insert_by_name(yystack.l_mark[0].n.name);
		var_buffer[var_buffer_index++] = yystack.l_mark[0].n.name[0];
	}
break;
case 51:
#line 207 "main.y"
	{
		insert_by_name(yystack.l_mark[0].n.name);
		var_buffer[var_buffer_index++] = yystack.l_mark[0].n.name[0];
	}
break;
#line 929 "y.tab.c"
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
