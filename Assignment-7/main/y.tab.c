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
	#include <ctype.h>
	#include "error.h"
	#define UNINITIALISED_TYPE -1
	int yylex(void);
	extern char* yytext;
	extern FILE* yyin;
	extern int yylineno;
	int global_scope = 0;
	int var_buffer[100];
	int var_buffer_index = 0;
	int scope_adjust = 0;
	struct entry{
		int entry_index;
		char var_name;
		int type[10];
		int scope[10];
		int line_no[10];
		int scope_array_index;
		int global_flag;
	}symbol_table[122],temp_table[122];

	void insert_by_name(char *name);
	int found(char *name);
	void display_table(void);
	int check_for_same_scope(struct entry node1,struct entry node2);
	void check_scope_declaration(char *name);
	int check_type(char *name1,char *name2);
	int is_number(const char *s);
	void init_symbol_table(void);
	void check_type_assign(char *name,int type,int scope);
	int min(int a,int b);

#line 49 "main.y"
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
#line 75 "y.tab.c"

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
   13,   13,   13,   13,   20,   21,   17,   19,   19,   19,
   22,   22,   18,   18,   18,    2,    2,    2,    2,    2,
    2,    2,    2,    2,    2,   15,   15,   15,   15,   15,
   15,   15,   15,   16,   16,   16,   16,    4,    4,    6,
   14,    3,    3,
};
static const YYINT yylen[] = {                            2,
    1,    3,    6,    0,    4,    2,    1,    1,    1,    1,
    0,    0,    6,    3,    0,    2,    0,    2,    5,   11,
    7,    5,    5,    1,    0,    0,    5,    6,    4,    0,
    2,    0,    4,    4,    4,    3,    3,    3,    3,    3,
    3,    3,    3,    3,    3,    1,    3,    3,    3,    3,
    3,    3,    3,    2,    2,    2,    2,    1,    1,    2,
    2,    3,    1,
};
static const YYINT yydefred[] = {                         0,
    7,    8,    9,   10,    0,    0,    1,    0,    0,   63,
    0,    0,    0,    0,    2,    0,    0,   62,    6,    0,
    0,    0,   11,    3,    5,   17,    0,    0,    0,    0,
    0,    0,    0,   17,   12,   16,    0,   24,    0,    0,
    0,    0,    0,    0,    0,    0,   18,    0,    0,    0,
   58,   59,    0,    0,    0,    0,    0,    0,    0,   14,
   13,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   33,   35,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   34,    0,   53,   47,
   48,   49,   50,   51,   52,   19,   25,   23,    0,   45,
   36,   37,   38,   39,   40,   41,   42,   43,   44,    0,
    0,    0,    0,    0,    0,   26,   21,    0,    0,   17,
    0,    0,    0,    0,    0,   17,    0,   27,   56,   57,
   54,   55,    0,    0,    0,   29,   20,    0,   31,   28,
};
static const YYINT yydgoto[] = {                          5,
   33,   58,   11,   53,    7,    8,   17,   34,   27,   26,
   35,   46,   36,   37,   54,  125,   98,   38,  116,  111,
  121,  136,
};
static const YYINT yysindex[] = {                      -199,
    0,    0,    0,    0,    0, -265,    0, -250, -258,    0,
 -245, -199, -199, -283,    0, -277, -219,    0,    0, -199,
 -231, -256,    0,    0,    0,    0, -235, -218, -216, -208,
 -206, -223, -234,    0,    0,    0, -255,    0, -199, -271,
 -222, -271, -262, -245, -235, -184,    0, -221, -205, -271,
    0,    0, -197, -174, -172, -171, -262, -159, -143,    0,
    0, -158, -183, -147, -239, -239, -239, -239, -239, -239,
 -231, -142, -231, -145, -127,    0,    0, -239, -239, -239,
 -239, -239, -239, -239, -239, -239,    0, -138,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0, -130,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0, -271,
 -196, -231, -136, -177, -173,    0,    0, -264, -170,    0,
 -133, -168, -167, -244, -137,    0, -229,    0,    0,    0,
    0,    0, -231, -229, -123,    0,    0, -196,    0,    0,
};
static const YYINT yyrindex[] = {                       148,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
 -120,  148,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0, -121,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0, -253, -121,    0,    0,    0,    0,    0,
    0,    0, -238,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0, -252,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
 -118,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0, -117,    0,    0,    0,
    0,    0,    0, -217,    0,    0,    0, -118,    0,    0,
};
static const YYINT yygindex[] = {                         0,
   53,   96,  126,   39,  152,    0,    0,  -21,  -33,    0,
  120,    0,    0,  128,  -40,    0,    0,    0,   30,    0,
    0,   35,
};
#define YYTABLESIZE 178
static const YYINT yytable[] = {                         24,
   45,   56,    9,   50,   22,   22,   22,   22,   22,   64,
   22,   22,   57,   47,  122,   61,   13,  123,   12,   22,
   22,   28,   29,   30,   14,   31,   18,   28,   29,   30,
   46,   31,   19,  135,  131,   46,   23,  132,   51,   52,
   23,   48,   32,   61,   10,  124,   32,   51,   52,   96,
   20,   99,    6,   25,   21,   32,   39,   22,   40,   22,
   22,   22,   22,  114,    6,   16,   41,  115,   42,  113,
   51,   52,   22,   43,   32,   10,    1,    2,    3,    4,
   32,   59,    1,    2,    3,    4,  127,   55,   61,   62,
  117,   63,  134,   65,   66,   75,   67,   68,   69,   71,
   70,   72,   73,   90,   91,   92,   93,   94,   95,   76,
   87,  137,    1,    2,    3,    4,  101,  102,  103,  104,
  105,  106,  107,  108,  109,   77,   89,   88,  100,   97,
  110,  112,  118,  119,   78,  120,  133,   79,  126,  128,
   80,  129,  130,   81,   82,  139,   83,    4,   60,   84,
   78,   15,   74,   79,   30,   32,   80,   85,   44,   81,
   82,   86,   83,   15,   60,   84,   49,  140,  138,    0,
    0,    0,    0,   85,    0,    0,    0,   86,
};
static const YYINT yycheck[] = {                         21,
   34,   42,  268,  275,  257,  258,  259,  260,  261,   50,
  263,  264,  275,  269,  279,  269,  275,  282,  269,  272,
  273,  257,  258,  259,  270,  261,  310,  257,  258,  259,
  269,  261,  310,  263,  279,  274,  272,  282,  310,  311,
  272,  297,  260,  297,  310,  310,  264,  310,  311,   71,
  270,   73,    0,  310,  274,  273,  275,  310,  275,  312,
  313,  314,  315,  260,   12,   13,  275,  264,  275,  110,
  310,  311,   20,  297,  310,  310,  312,  313,  314,  315,
  310,   43,  312,  313,  314,  315,  120,  310,  273,  311,
  112,  297,  126,  291,  292,   57,  294,  295,  296,  274,
  298,  274,  274,   65,   66,   67,   68,   69,   70,  269,
  269,  133,  312,  313,  314,  315,   78,   79,   80,   81,
   82,   83,   84,   85,   86,  269,  274,  311,  274,  272,
  269,  262,  269,  311,  278,  309,  274,  281,  309,  273,
  284,  310,  310,  287,  288,  269,  290,    0,  269,  293,
  278,  273,   57,  281,  273,  273,  284,  301,   33,  287,
  288,  305,  290,   12,   45,  293,   39,  138,  134,   -1,
   -1,   -1,   -1,  301,   -1,   -1,   -1,  305,
};
#define YYFINAL 5
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 315
#define YYUNDFTOKEN 340
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
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"illegal-symbol",
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
"actual_statement : IF_TOK LPAREN_TOK relational_expression RPAREN_TOK statement_block",
"actual_statement : SWITCH_TOK LPAREN_TOK ID_TOK RPAREN_TOK switch_block",
"actual_statement : assignment_expression",
"$$3 :",
"$$4 :",
"switch_block : LCURLY_TOK $$3 case_blocks $$4 RCURLY_TOK",
"case_blocks : CASE_TOK INT_CONST_TOK COLON_TOK statement optional_break case_blocks",
"case_blocks : DEFAULT_TOK COLON_TOK statement optional_break",
"case_blocks :",
"optional_break : BREAK_TOK SEMICOLON_TOK",
"optional_break :",
"assignment_expression : ID_TOK EQUAL_TOK arith_expression SEMICOLON_TOK",
"assignment_expression : declaration_statement EQUAL_TOK INT_CONST_TOK SEMICOLON_TOK",
"assignment_expression : ID_TOK EQUAL_TOK operand SEMICOLON_TOK",
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
"relational_expression : operand",
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
#line 242 "main.y"

int main(int argc,const char* argv[]){
	init_symbol_table();
	yyin = fopen(argv[1],"r");
	yyparse();
	printf("node size is: %ld\n",sizeof(symbol_table[0]));
	return 0;
}
void success(void){
	display_table();
	printf("\n\n\t\t\tSUCCESSFULLY PARSED :)\n");
}
void yyerror(char *s){
	printf("SORRY SOME SYNTAX ERROR IS THERE IN LINE ........ :( . THE MESSEGE: %s\n",s);
	for(int i = 0; i < REASON ; i++){
		printf ("%s\n",error_reason[i]);
	}
	display_table();
	exit(1);
}
void init_symbol_table(void){
	for(int i=0;i <= 122;i++){
		symbol_table[i].entry_index = -1;
	}
}
void insert_by_name(char *name){

	int index = name[0];
	temp_table[index].entry_index = index;
	temp_table[index].var_name = name[0];
	memset((void*)temp_table[index].type,-1,sizeof(int)*10);
	temp_table[index].scope[0] = global_scope;
	temp_table[index].line_no[0] = yylineno;
	temp_table[index].scope_array_index = 0;
}
void assign_type(int t,int flag){

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
					symbol_table[element].line_no[global_scope] = yylineno;
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
					symbol_table[element].line_no[global_scope] = yylineno;
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
	printf("\t\t\t%s\n\n","SYMBOL TABLE BUILT SO FAR");
	printf("----------------------------------------------------------------------------------------------------\n");
	for(int i=0;i <= 122;i++){
		if(symbol_table[i].entry_index != -1){
			for(int j=0;j < symbol_table[i].scope_array_index;j++){
				printf("| index: %d name: %c total_of_scope_used: %d type = %d in the scope %d line_no: %d global_flag: %d\t   |\n",symbol_table[i].entry_index,symbol_table[i].var_name,symbol_table[i].scope_array_index,symbol_table[i].type[symbol_table[i].scope[j]],symbol_table[i].scope[j],symbol_table[i].line_no[symbol_table[i].scope[j]],symbol_table[i].global_flag);
			}
			printf("----------------------------------------------------------------------------------------------------\n");
		}
	}
}
void check_scope_declaration(char *name){
	if(found(name)){
		return;
	}
	yyerror("Un-declared till now");
}
int found(char *name){
	return symbol_table[(int)name[0]].entry_index != -1  || strlen(name) > 1 || is_number(name);
}
int  check_type(char *name1,char *name2){
	if (strlen(name1) == 1 && strlen(name2) == 1 && !is_number(name2)){
		for(int i = 0; i < symbol_table[(int)name1[0]].scope_array_index;i++){
			for(int j = 0; j < symbol_table[(int)name2[0]].scope_array_index;j++){
				if (symbol_table[(int)name1[0]].type[symbol_table[(int)name1[0]].scope[i]] == symbol_table[(int)name2[0]].type[symbol_table[(int)name2[0]].scope[j]] && symbol_table[(int)name1[0]].type[symbol_table[(int)name1[0]].scope[i]] != 0 )
					return symbol_table[(int)name1[0]].type[symbol_table[(int)name1[0]].scope[i]];
			}
		}
		printf("%s === %s\n",name1,name2);
		yyerror("Mismatched Type");
	}
	else if(strlen(name1) == 1){
		if (is_number(name2)){
			for(int i = 0;i < symbol_table[name1[0]].scope_array_index;i++){
				if(symbol_table[name1[0]].type[symbol_table[name1[0]].scope[i]] == 1){
					return 1;
				}
			}
			yyerror("Integer type not found");
		}
		yyerror("String is not allowed");
	}
	else if(strlen(name2) == 1){
		if(is_number(name1)){
			for(int i = 0;i < symbol_table[name2[0]].scope_array_index;i++){
				if(symbol_table[name2[0]].type[symbol_table[name2[0]].scope[i]] == 1){
					return 1;
				}
			}
			yyerror("Integer type not found");
		}
		yyerror("String is not allowed");
	}
	else{
		if(is_number(name1) && is_number(name2)){
			return 1;
		}
		yyerror("Un recognised type of two variables");
	}

}
void check_type_assign(char *name,int type,int scope){
	for(int i = 0;i < symbol_table[name[0]].scope_array_index;i++){
		if(symbol_table[name[0]].type[symbol_table[name[0]].scope[i]] == type){
			return;
		}
	}
	yyerror("Mismatched type of LHS and RHS");
}
int min(int a,int b){
	if (a > b)
		return b;
	return a;
}
int is_number(const char *s)
{
    while (*s) {
        if (isdigit(*s++) == 0) return 0;
    }
    return 1;
}
#line 597 "y.tab.c"

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
#line 66 "main.y"
	{success();}
break;
case 7:
#line 81 "main.y"
	{yyval.t.i_type = 1;}
break;
case 8:
#line 82 "main.y"
	{yyval.t.i_type = 2; }
break;
case 9:
#line 83 "main.y"
	{yyval.t.i_type = 3; }
break;
case 10:
#line 84 "main.y"
	{yyval.t.i_type = 4; }
break;
case 11:
#line 88 "main.y"
	{
		global_scope += 1;
	}
break;
case 12:
#line 90 "main.y"
	{
		global_scope -= 1;
	}
break;
case 23:
#line 111 "main.y"
	{
		check_scope_declaration(yystack.l_mark[-2].n.name);
	}
break;
case 25:
#line 117 "main.y"
	{
		global_scope += 1;
	}
break;
case 26:
#line 119 "main.y"
	{
		global_scope -= 1;
	}
break;
case 33:
#line 133 "main.y"
	{
		check_scope_declaration(yystack.l_mark[-3].n.name);
		check_type_assign(yystack.l_mark[-3].n.name,yystack.l_mark[-1].t.i_type,global_scope);
	}
break;
case 34:
#line 137 "main.y"
	{
		printf("Declaration statement is correctly parsed at line no %d\n",yylineno);
	}
break;
case 35:
#line 140 "main.y"
	{
		check_scope_declaration(yystack.l_mark[-3].n.name);
		check_scope_declaration(yystack.l_mark[-1].n.name);
		check_type(yystack.l_mark[-3].n.name,yystack.l_mark[-1].n.name);
	}
break;
case 36:
#line 148 "main.y"
	{
		check_scope_declaration(yystack.l_mark[-2].n.name);
		check_scope_declaration(yystack.l_mark[0].n.name);
		yyval.t.i_type = check_type(yystack.l_mark[-2].n.name,yystack.l_mark[0].n.name);
	}
break;
case 37:
#line 153 "main.y"
	{
		check_scope_declaration(yystack.l_mark[-2].n.name);
		check_scope_declaration(yystack.l_mark[0].n.name);
		yyval.t.i_type = check_type(yystack.l_mark[-2].n.name,yystack.l_mark[0].n.name);
	}
break;
case 38:
#line 158 "main.y"
	{
		check_scope_declaration(yystack.l_mark[-2].n.name);
		check_scope_declaration(yystack.l_mark[0].n.name);
		yyval.t.i_type = check_type(yystack.l_mark[-2].n.name,yystack.l_mark[0].n.name);
	}
break;
case 39:
#line 163 "main.y"
	{
		check_scope_declaration(yystack.l_mark[-2].n.name);
		check_scope_declaration(yystack.l_mark[0].n.name);
		yyval.t.i_type = check_type(yystack.l_mark[-2].n.name,yystack.l_mark[0].n.name);
	}
break;
case 40:
#line 168 "main.y"
	{
		check_scope_declaration(yystack.l_mark[-2].n.name);
		check_scope_declaration(yystack.l_mark[0].n.name);
		yyval.t.i_type = check_type(yystack.l_mark[-2].n.name,yystack.l_mark[0].n.name);
	}
break;
case 41:
#line 173 "main.y"
	{
		check_scope_declaration(yystack.l_mark[-2].n.name);
		check_scope_declaration(yystack.l_mark[0].n.name);
		yyval.t.i_type = check_type(yystack.l_mark[-2].n.name,yystack.l_mark[0].n.name);
	}
break;
case 42:
#line 178 "main.y"
	{
		check_scope_declaration(yystack.l_mark[-2].n.name);
		check_scope_declaration(yystack.l_mark[0].n.name);
		yyval.t.i_type = check_type(yystack.l_mark[-2].n.name,yystack.l_mark[0].n.name);
	}
break;
case 43:
#line 183 "main.y"
	{
		check_scope_declaration(yystack.l_mark[-2].n.name);
		check_scope_declaration(yystack.l_mark[0].n.name);
		yyval.t.i_type = check_type(yystack.l_mark[-2].n.name,yystack.l_mark[0].n.name);
	}
break;
case 44:
#line 188 "main.y"
	{
		check_scope_declaration(yystack.l_mark[-2].n.name);
		check_scope_declaration(yystack.l_mark[0].n.name);
		yyval.t.i_type = check_type(yystack.l_mark[-2].n.name,yystack.l_mark[0].n.name);
	}
break;
case 45:
#line 193 "main.y"
	{}
break;
case 46:
#line 197 "main.y"
	{check_scope_declaration(yystack.l_mark[0].n.name);}
break;
case 47:
#line 198 "main.y"
	{check_scope_declaration(yystack.l_mark[-2].n.name);}
break;
case 48:
#line 199 "main.y"
	{check_scope_declaration(yystack.l_mark[-2].n.name);}
break;
case 49:
#line 200 "main.y"
	{check_scope_declaration(yystack.l_mark[-2].n.name);}
break;
case 50:
#line 201 "main.y"
	{check_scope_declaration(yystack.l_mark[-2].n.name);}
break;
case 51:
#line 202 "main.y"
	{check_scope_declaration(yystack.l_mark[-2].n.name);}
break;
case 52:
#line 203 "main.y"
	{check_scope_declaration(yystack.l_mark[-2].n.name);}
break;
case 54:
#line 208 "main.y"
	{check_scope_declaration(yystack.l_mark[-1].n.name);}
break;
case 55:
#line 209 "main.y"
	{check_scope_declaration(yystack.l_mark[-1].n.name);}
break;
case 56:
#line 210 "main.y"
	{check_scope_declaration(yystack.l_mark[0].n.name);}
break;
case 57:
#line 211 "main.y"
	{check_scope_declaration(yystack.l_mark[0].n.name);}
break;
case 58:
#line 215 "main.y"
	{}
break;
case 59:
#line 216 "main.y"
	{}
break;
case 60:
#line 220 "main.y"
	{
		assign_type(yystack.l_mark[-1].t.i_type,1);
	}
break;
case 61:
#line 226 "main.y"
	{
		assign_type(yystack.l_mark[-1].t.i_type,0);
	}
break;
case 62:
#line 232 "main.y"
	{
		insert_by_name(yystack.l_mark[0].n.name);
		var_buffer[var_buffer_index++] = yystack.l_mark[0].n.name[0];
	}
break;
case 63:
#line 236 "main.y"
	{
		insert_by_name(yystack.l_mark[0].n.name);
		var_buffer[var_buffer_index++] = yystack.l_mark[0].n.name[0];
	}
break;
#line 1024 "y.tab.c"
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
