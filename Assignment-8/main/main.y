%{
	#include <stdio.h>
	#include <string.h>
	#include <stdlib.h>
	int yylex(void);
	extern FILE *yyin;
	struct expression_type{
		char *code;
		char *address;
	};
	int temporary_var = 1;
	int label_var = 1;
	char *bool,*stat,*var,*begin_label1,*begin_label2;
	struct expression_type *return_exp;
	char* gen_temp_var(void){
		char *temp = (char*)malloc(sizeof(char) * 20);
		char *t = (char *)malloc(10);
		temp[0] = 't';
		snprintf(t,10,"%d",temporary_var);
		strcat(temp,t);
		temporary_var++;
		return temp;
	}
	char* gen_label_var(void){
		char *temp = (char*)malloc(sizeof(char) * 20);
		char *t = (char *)malloc(10);
		temp[0] = 'L';
		snprintf(t,10,"%d",label_var);
		strcat(temp,t);
		label_var++;
		return temp;
	}	
%}

%union{
	int i_val;
	char *c_val;
	struct expression_type *exp_type;
}
%start programe
%token <i_val> INT_CONST_TOK
%token <c_val> ID_TOK ELSE_TOK WHILE_TOK LPAREN_TOK RPAREN_TOK LCURLY_TOK RCURLY_TOK IF_TOK INTEGER_TOK 
%token <c_val>  EQUAL_TOK SEMICOLON_TOK RELATIONAL_TOK
%type <c_val> programe  statement statement_block boolean_val declaration identifier
%type <exp_type> expression actual_statement

%left OR_TOK
%left AND_TOK
%left NOT_TOK
%left RELATIONAL_TOK
%right EQUAL_TOK
%left ADDITION_TOK MINUS_TOK
%left MULTIPLICATION_TOK DIVISION_TOK MODULO_TOK

%%
	programe:
		function {printf("Successfully parsed\n");}
		;

	function:
		function actual_statement {printf("Actual: %s\n",$2->code);}
		| 
		;
	actual_statement:
		WHILE_TOK LPAREN_TOK boolean_val RPAREN_TOK statement_block {
			bool = $3;
			stat = $5;
			begin_label1 = gen_label_var();
			begin_label2 = gen_label_var();
			char *pos = strstr(bool,"TRUE");
			while(pos != NULL){
				strncpy(pos,begin_label2,strlen(begin_label2));
				strncpy(pos+strlen(begin_label2),"     ",(5 - strlen(begin_label2)));
				pos = strstr(bool,"TRUE");
			}
			pos = strstr(bool,"FALSE");
			while (pos != NULL){
				strncpy(pos,"NEXT ",5);
				pos = strstr(bool,"FALSE");
			}
			pos = strstr(stat,"NEXT");
			while (pos != NULL){
				strncpy(pos,begin_label1,strlen(begin_label1));
				strncpy(pos+strlen(begin_label1),"     ",(5 - strlen(begin_label1)));
				pos = strstr(stat,"NEXT");
			}
			char *temp_var = (char *)malloc(strlen(bool)+strlen(stat)+20);
			strcat(temp_var,begin_label1);
			strcat(temp_var," : ");
			strcat(temp_var,bool);
			strcat(temp_var,"\n");
			strcat(temp_var,begin_label2);
			strcat(temp_var," : ");
			strcat(temp_var,stat);
			strcat(temp_var,"\n");
			strcat(temp_var,"goto ");
			strcat(temp_var,begin_label1);
			return_exp = (struct expression_type *)malloc(sizeof(struct expression_type));
			return_exp->address = (char *)malloc(2);
			return_exp->address[0] = 'X';
			return_exp->code = (char *)malloc(sizeof(char) * strlen(temp_var));
			strncpy(return_exp->code,temp_var,strlen(temp_var));
			$$ = return_exp;
		}
		| IF_TOK LPAREN_TOK boolean_val RPAREN_TOK statement_block {
			bool = $3;
			stat = $5;
			begin_label1 = gen_label_var();
			char *pos = strstr(bool,"TRUE");
			while (pos != NULL){
				strncpy(pos,begin_label1,strlen(begin_label1));
				strncpy(pos+strlen(begin_label1),"     ",(5 - strlen(begin_label1)));
				pos = strstr(bool,"TRUE");
			}
			pos = strstr(bool,"FALSE");
			while (pos != NULL){
				strncpy(pos,"NEXT ",5);
				pos = strstr(bool,"FALSE");
			}
			char *temp_var = (char *)malloc(strlen(bool)+strlen(stat)+20);
			strcat(temp_var,bool);
			strcat(temp_var,"\n");
			strcat(temp_var,begin_label1);
			strcat(temp_var," : ");
			strcat(temp_var,stat);
			return_exp = (struct expression_type *)malloc(sizeof(struct expression_type));
			return_exp->address = (char *)malloc(2);
			return_exp->address[0] = 'X';
			return_exp->code = (char *)malloc(sizeof(char) * strlen(temp_var));
			strncpy(return_exp->code,temp_var,strlen(temp_var));
			$$ = return_exp;
		}
		| IF_TOK LPAREN_TOK boolean_val RPAREN_TOK statement_block ELSE_TOK statement_block {
			bool = $3;
			begin_label1 = gen_label_var();
			char *pos = strstr (bool,"TRUE");		
			while(pos!=NULL){
				strncpy (pos,begin_label1,strlen(begin_label1));
				strncpy (pos+strlen(begin_label1),"     ",(5-strlen(begin_label1)));
				pos = strstr (bool,"TRUE");
			}
			begin_label2 = gen_label_var();
			pos = strstr (bool,"FALSE");
			while(pos!=NULL){
				strncpy (pos,begin_label2,strlen(begin_label2));
				strncpy (pos+strlen(begin_label2),"     ",(5-strlen(begin_label2)));
				pos = strstr (bool,"FAIL");
			}
			char *temp_var = (char *)malloc(strlen(bool)+strlen($5)+strlen($7)+20);
			strcat(temp_var,bool);
			strcat(temp_var,"\n");
			strcat(temp_var,begin_label1);
			strcat(temp_var," : ");
			strcat(temp_var,$5);
			strcat(temp_var,"\n");
			strcat(temp_var,"goto NEXT");
			strcat(temp_var,"\n");
			strcat(temp_var,begin_label2);
			strcat(temp_var," : ");
			strcat(temp_var,$7);
			return_exp = (struct expression_type *)malloc(sizeof(struct expression_type));
			return_exp->address = (char *)malloc(2);
			return_exp->address[0] = 'X';
			return_exp->code = (char *)malloc(sizeof(char) * strlen(temp_var));
			strncpy(return_exp->code,temp_var,strlen(temp_var));
			$$ = return_exp;
		}
		| expression SEMICOLON_TOK { $$ = $1;}
		| declaration SEMICOLON_TOK {
			return_exp = (struct expression_type *)malloc(sizeof(struct expression_type));
			return_exp->address = (char *)malloc(20);
			return_exp->address = $1;
			return_exp->code = NULL;
			$$ = return_exp;
		}
		| declaration EQUAL_TOK expression SEMICOLON_TOK {
			return_exp = (struct expression_type *)malloc(sizeof(struct expression_type));
			return_exp->address = (char *)malloc(20);
			return_exp->address = gen_temp_var();
			char *temp_var = (char *)malloc(20);
			strcat(temp_var,$1);
			strcat(temp_var,"=");
			strcat(temp_var,$3->address);
			char *temp = (char *)malloc(strlen($1) + strlen($3->code) + strlen(temp_var) + 2);
			if ($3->code[0] != 0){
				strcat(temp,$3->code);
				strcat(temp,"\n");
			}
			strcat(temp,temp_var);
			return_exp->code = temp;
			$$ = return_exp;
		}
		;
	statement_block:
		LCURLY_TOK statement RCURLY_TOK { $$ = $2; }
		;

	statement:
		statement actual_statement { $$ = $2->code;}
		|
		;
	declaration:
		INTEGER_TOK identifier { $$ = $2;} 
		;
	identifier:
		ID_TOK { $$ = $1;}
		;
	expression:
		expression ADDITION_TOK expression{
			return_exp = (struct expression_type *)malloc(sizeof(struct expression_type));
			return_exp->address = (char *)malloc(sizeof(char) * 20);
			return_exp->address = gen_temp_var();
			var = (char *)malloc(sizeof(char) * 20);
			strcat(var,return_exp->address);
			strcat(var,"=");
			strcat(var,$1->address);
			strcat(var,"+");
			strcat(var,$3->address);
			strcat(var,"\n");
			int x = strlen(var);
			char *return_var = (char *)malloc(strlen($1->code)+strlen($3->code)+strlen(var)+6);
			if ($1->code[0] != 0){
				strcat(return_var,$1->code);
				strcat(return_var,"\n");
			}
			if ($3->code[0] != 0){
				strcat(return_var,$3->code);
				strcat(return_var,"\n");
			}
			strcat(var,return_var);
			return_exp->code = var;
           	$$ = return_exp;           
		}
		| expression MINUS_TOK expression{
			return_exp = (struct expression_type *)malloc(sizeof(struct expression_type));
			return_exp->address = (char *)malloc(sizeof(char) * 20);
			return_exp->address = gen_temp_var();
			var = (char *)malloc(sizeof(char) * 20);
			strcat(var,return_exp->address);
			strcat(var,"=");
			strcat(var,$1->address);
			strcat(var,"-");
			strcat(var,$3->address);
			strcat(var,"\n");
			int x = strlen(var);
			char *return_var = (char *)malloc(strlen($1->code)+strlen($3->code)+strlen(var)+6);
			if ($1->code[0] != 0){
				strcat(return_var,$1->code);
				strcat(return_var,"\n");
			}
			if ($3->code[0] != 0){
				strcat(return_var,$3->code);
				strcat(return_var,"\n");
			}
			strcat(var,return_var);
			return_exp->code = var;
           	$$ = return_exp;

		}
		| expression MULTIPLICATION_TOK expression{
			return_exp = (struct expression_type *)malloc(sizeof(struct expression_type));
			return_exp->address = (char *)malloc(sizeof(char) * 20);
			return_exp->address = gen_temp_var();
			var = (char *)malloc(sizeof(char) * 20);
			strcat(var,return_exp->address);
			strcat(var,"=");
			strcat(var,$1->address);
			strcat(var,"*");
			strcat(var,$3->address);
			strcat(var,"\n");
			int x = strlen(var);
			char *return_var = (char *)malloc(strlen($1->code)+strlen($3->code)+strlen(var)+6);
			if ($1->code[0] != 0){
				strcat(return_var,$1->code);
				strcat(return_var,"\n");
			}
			if ($3->code[0] != 0){
				strcat(return_var,$3->code);
				strcat(return_var,"\n");
			}
			strcat(var,return_var);
			return_exp->code = var;
           	$$ = return_exp;

		}
		| expression DIVISION_TOK expression{
			return_exp = (struct expression_type *)malloc(sizeof(struct expression_type));
			return_exp->address = (char *)malloc(sizeof(char) * 20);
			return_exp->address = gen_temp_var();
			var = (char *)malloc(sizeof(char) * 20);
			strcat(var,return_exp->address);
			strcat(var,"=");
			strcat(var,$1->address);
			strcat(var,"/");
			strcat(var,$3->address);
			strcat(var,"\n");
			int x = strlen(var);
			char *return_var = (char *)malloc(strlen($1->code)+strlen($3->code)+strlen(var)+6);
			if ($1->code[0] != 0){
				strcat(return_var,$1->code);
				strcat(return_var,"\n");
			}
			if ($3->code[0] != 0){
				strcat(return_var,$3->code);
				strcat(return_var,"\n");
			}
			strcat(var,return_var);
			return_exp->code = var;
           	$$ = return_exp;

		}
		| expression MODULO_TOK expression{
			return_exp = (struct expression_type *)malloc(sizeof(struct expression_type));
			return_exp->address = (char *)malloc(sizeof(char) * 20);
			return_exp->address = gen_temp_var();
			var = (char *)malloc(sizeof(char) * 20);
			strcat(var,return_exp->address);
			strcat(var,"=");
			strcat(var,$1->address);
			strcat(var,"%");
			strcat(var,$3->address);
			strcat(var,"\n");
			int x = strlen(var);
			char *return_var = (char *)malloc(strlen($1->code)+strlen($3->code)+strlen(var)+6);
			if ($1->code[0] != 0){
				strcat(return_var,$1->code);
				strcat(return_var,"\n");
			}
			if ($3->code[0] != 0){
				strcat(return_var,$3->code);
				strcat(return_var,"\n");
			}
			strcat(var,return_var);
			return_exp->code = var;
           	$$ = return_exp;

		}
		| LPAREN_TOK expression RPAREN_TOK{
			$$ = $2;

		} 
		| identifier {
			return_exp = (struct expression_type *)malloc(sizeof(struct expression_type));
			return_exp->address = (char *)malloc(sizeof(char) * 20);
			return_exp->address = $1;
			return_exp->code = (char *)malloc(sizeof(char) * 2);
			return_exp->code[0] = 0;
			$$ = return_exp;
		}
		| INT_CONST_TOK{
			return_exp = (struct expression_type *)malloc(sizeof(struct expression_type));
			return_exp->address = (char *)malloc(sizeof(char) * 20);
			char *num = (char *)malloc(sizeof(char) * 20);
			snprintf(num,20,"%d",$1);
			return_exp->address = num;
			return_exp->code = (char *)malloc(sizeof(char) * 2);
			return_exp->code[0] = 0;
			$$ = return_exp;
		}
		;
	boolean_val:
		expression RELATIONAL_TOK expression {
			char *temp_var = (char *)malloc(strlen($1->code) + strlen($3->code) + 40);
			if($1->code[0] != 0){
				strcat(temp_var,$1->code);
				strcat(temp_var,"\n");
			}
			if($3->code[0] != 0){
				strcat(temp_var,$3->code);
				strcat(temp_var,"\n");
			}
			char *return_var = (char *)malloc(sizeof(char) * 40);
			strcat(return_var,"if (");
			strcat(return_var,$1->address);
			strcat(return_var,$2);
			strcat(return_var,$3->address);
			strcat(return_var,") goto TRUE \n goto FALSE");
			strcat(temp_var,return_var);
			$$ = temp_var;
		}
		;
%%
int main(int argc,const char *argv[]){
	yyin = fopen(argv[1],"r");
	yyparse();
}
void *yyerror(char *s){
	printf("%s\n",s);
}