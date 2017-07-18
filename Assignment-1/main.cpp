#include <bits/stdc++.h>
#include "tok.h"
#include <stdlib.h>
#include <string>
#include <algorithm> 
#include <functional> 
#include <cctype>
#include <locale>
using namespace std;
static inline std::string &ltrim(std::string &s) {
    s.erase(s.begin(), std::find_if(s.begin(), s.end(),
            std::not1(std::ptr_fun<int, int>(std::isspace))));
    return s;
}

// trim from end
static inline std::string &rtrim(std::string &s) {
    s.erase(std::find_if(s.rbegin(), s.rend(),
            std::not1(std::ptr_fun<int, int>(std::isspace))).base(), s.end());
    return s;
}

// trim from both ends
static inline std::string &trim(std::string &s) {
    return ltrim(rtrim(s));
}
void yylex(FILE *fp,unsigned int *token_code,char* yytext);
string* parse(FILE* fp);
void remove_duplicate(unsigned int* token_code);
unsigned int tok_index,yytext_index,string_index;
string *parsed_word = NULL;
int main(int argc, char const *argv[])
{
	if (argc != 2){
		cerr << "Argument Error"<<endl;
		return 0;
	}
	FILE * fp = NULL;
	fp = fopen(argv[1],"r");
	if (!fp){
		cerr <<" File not found"<<endl;
		return 0;
	}
	unsigned int *token_code = new unsigned int[5000];
	char *yytext = new char[5000];
	tok_index = yytext_index = string_index = 0;
	while(!feof(fp)){
		yylex(fp,token_code,yytext);
	}
	cout<<"\n\t\t\tLEXIMS CODE\t\t\t"<<endl;
	for (int i = 0; i < tok_index; ++i)
	{
		cout<<token_code[i]<<" ";
	}
	remove_duplicate(token_code);
	cout<<"\n\t\t\tTOKEN IDs\t\t\t"<<endl;
	for (int i = 0; i <= tok_index; ++i)
	{
		switch(token_code[i]){
			case FOR_TOK:
				cout<<"FOR_TOK"<<endl;
				break;
			case SWITCH_TOK:
				cout<<"SWITCH_TOK"<<endl;
				break;
			case IF_TOK:
				cout<<"IF_TOK"<<endl;
				break;
			case ELSE_TOK:
				cout<<"ELSE_TOK"<<endl;
				break;
			case CASE_TOK:
				cout<<"CASE_TOK"<<endl;
				break;
			case GTEQ_TOK:
				cout<<"GTEQ_TOK"<<endl;
				break;
			case LSEQ_TOK:
				cout<<"LSEQ_TOK"<<endl;
				break;
			case AND_TOK:
				cout<<"AND_TOK"<<endl;
				break;
			case OR_TOK:
				cout<<"OR_TOK"<<endl;
				break;
			case NOTEQ_TOK:
				cout<<"NOTEQ_TOK"<<endl;
				break;
			case EQ2_TOK:
				cout<<"EQ2_TOK"<<endl;
				break;
			case LPAREN_TOK:
				cout<<"LPAREN_TOK"<<endl;
				break;
			case RPAREN_TOK:
				cout<<"RPAREN_TOK"<<endl;
				break;
			case ADDITION_TOK:
				cout<<"ADDITION_TOK"<<endl;
				break;
			case MINUS_TOK:
				cout<<"MINUS_TOK"<<endl;
				break;
			case MULTI_TOK:
				cout<<"MULTI_TOK"<<endl;
				break;
			case DIVISION_TOK:
				cout<<"DIVISION_TOK"<<endl;
				break;
			case MOD_TOK:
				cout<<"MOD_TOK"<<endl;
				break;
			case GT_TOK:
				cout<<"GT_TOK"<<endl;
				break;
			case LS_TOK:
				cout<<"LS_TOK"<<endl;
				break;
			case EQ_TOK:
				cout<<"EQ_TOK"<<endl;
				break;
			case LCURLY_TOK:
				cout<<"LCURLY_TOK"<<endl;
				break;
			case RCURLY_TOK:
				cout<<"RCURLY_TOK"<<endl;
				break;
			case BITOR_TOK:
				cout<<"BITOR_TOK"<<endl;
				break;
			case BITAND_TOK:
				cout<<"BITAND_TOK"<<endl;
				break;
			case XOR_TOK:
				cout<<"XOR_TOK"<<endl;
				break;
			case ID_TOK:
				cout<<"ID_TOK"<<endl;
				break;
			case INTCONST:
				cout<<"INTCONST_TOK"<<endl;
				break;
			case SEMICOLON_TOK:
				cout<<"SEMICOLON_TOK"<<endl;
				break;
			default:
				cout<<"NOT FOUND"<<endl;
				break;
		}
	}
	
	cout<<endl;
	return 0;
}
void remove_duplicate(unsigned int* token_code){
	sort(token_code,token_code+tok_index);
	int k = 0;
	token_code[k++] = token_code[0];
	for (int i = 1; i < tok_index; ++i)
	{	
		if(token_code[i] != token_code[i-1]){
			token_code[k++] = token_code[i];
		}
	}
	tok_index = k;
}
string* parse(FILE* fp){
	string str = "";
	string *res = new string[5000];
	char c = getc(fp);
	FILE *temp_pointer = fp;
	char x;
	while(!feof(fp)){
		if(c != '(' && c !=')' && c != '>' && c != '<' && c != '=' && c != '-' && c != '+' && c != '*' &&  c != '/' 
			&& c != '%' && c != '{' && c != '}' && c != '|' && c != '&' && c != '^' && c != '!' && c != ' ' && c != '\t' && c != ';' && c != ','){
				str += c;
		}
		else{
			if(trim(str).length() != 0){
				res[string_index] = trim(str);
				str = "";
				string_index += 1;
			}
			if(c != '>' && c != '<' && c != '=' && c !='|' && c != '&' && c != '!' && c != '\t' && c != ' '){
				res[string_index++] = c;
			}
			else{
				switch(c){
					case '>':
						temp_pointer = fp;
						x = getc(fp);
						if(x == '='){		//>=
							res[string_index++] = ">=";
						}
						else{
							res[string_index++] = ">";
							fseek(fp,-1,SEEK_CUR);
						}
						break;
					case '<':
						temp_pointer = fp;
						x = getc(fp);
						if(x == '='){		//>=
							res[string_index++] = "<=";
						}
						else{
							res[string_index++] = "<";
							fseek(fp,-1,SEEK_CUR);
						}
						break;
					case '=':
						temp_pointer = fp;
						x = getc(fp);
						if(x == '='){		//>=
							res[string_index++] = "==";
						}
						else{
							res[string_index++] = "=";
							fseek(fp,-1,SEEK_CUR);
						}
						break;
					case '|':
						temp_pointer = fp;
						x = getc(fp);
						if(x == '|'){		//>=
							res[string_index++] = "||";
						}
						else{
							res[string_index++] = "|";
							fseek(fp,-1,SEEK_CUR);
						}
						break;
					case '&':
						temp_pointer = fp;
						x = getc(fp);
						if(x == '&'){		//>=
							res[string_index++] = "&&";
						}
						else{
							res[string_index++] = "&";
							fseek(fp,-1,SEEK_CUR);
						}
						break;
					case '!':
						temp_pointer = fp;
						x = getc(fp);
						if(x == '='){		//>=
							res[string_index++] = "!=";
						}
						else{
							res[string_index++] = "=";
							fseek(fp,-1,SEEK_CUR);
						}
						break;
				}
			}
		}
		c = getc(fp);
	}
	return res;
}
void yylex(FILE *fp,unsigned int * token_code,char* yytext){
	parsed_word = parse(fp);
	/*
	for (int i = 0; i <= string_index; ++i)
	{
		cout<<i<<" --> "<<parsed_word[i]<<"\tLength = "<<parsed_word[i].length()<<endl;
	}
	*/
	for (int i = 0; i < string_index; ++i){
		int len = parsed_word[i].length();
		if (len == 1){	// single charcter tokens
			if((parsed_word[i][0]-'0') >= 0 && (parsed_word[i][0]-'0') <= 9){	// integer constatnt
				token_code[tok_index++] = INTCONST;
				yytext = strncat(yytext,(const char*)parsed_word[i].c_str(),1) ;
			}
			else{		// identifiers single letters and arithmetic operators single letters
				switch(parsed_word[i][0]){
					case '+':
						token_code[tok_index++] = ADDITION_TOK;
						break;
					case '-':
						token_code[tok_index++] = MINUS_TOK;
						break;
					case '*':
						token_code[tok_index++] = MULTI_TOK;
						break;
					case '/':
						token_code[tok_index++] = DIVISION_TOK;
						break;
					case '%':
						token_code[tok_index++] = MOD_TOK;
						break;
					case '&':
						token_code[tok_index++] = BITAND_TOK;
						break;
					case '|':
						token_code[tok_index++] = BITOR_TOK;
						break;
					case '^':
						token_code[tok_index++] = XOR_TOK;
						break;
					case '!':
						token_code[tok_index++] = NOT_TOK;
						break;
					case '(':
						token_code[tok_index++] = LPAREN_TOK;
						break;
					case ')':
						token_code[tok_index++] = RPAREN_TOK;
						break;
					case '{':
						token_code[tok_index++] = LCURLY_TOK;
						break;
					case '}':
						token_code[tok_index++] = RCURLY_TOK;
						break;
					case '>':
						token_code[tok_index++] = GT_TOK;
						break;
					case '<':
						token_code[tok_index++] = LS_TOK;
						break;
					case '=':
						token_code[tok_index++] = EQ_TOK;
						break;
					case ';':
						token_code[tok_index++] = SEMICOLON_TOK;
						break;
					default:
						token_code[tok_index++] = ID_TOK;
						break;
				}
				yytext = strncat(yytext,(const char*)parsed_word[i].c_str(),1);
			}
		}
		else{
			if(parsed_word[i] == "for"){
				token_code[tok_index++] = FOR_TOK;
				yytext = strncat(yytext,(const char*)"for",3);
			}
			else if(parsed_word[i] == "if"){
				token_code[tok_index++] = IF_TOK;
				yytext = strncat(yytext,(const char*)"if",2);
			}
			else if(parsed_word[i] == "else"){
				token_code[tok_index++] = ELSE_TOK;
				yytext = strncat(yytext,(const char*)"else",4);
			}
			else if(parsed_word[i] == "switch"){
				token_code[tok_index++] = SWITCH_TOK;
				yytext = strncat(yytext,(const char*)"switch",6);
			}
			else if(parsed_word[i] == "case"){
				token_code[tok_index++] = CASE_TOK;
				yytext = strncat(yytext,(const char*)"case",4);
			}
			else{	// identifiers multiple letters or double letters operators
				if(parsed_word[i] == "=="){
					token_code[tok_index++] = EQ2_TOK;
				}
				else if(parsed_word[i] == ">="){
					token_code[tok_index++] = GTEQ_TOK;
				}
				else if(parsed_word[i] == "<="){
					token_code[tok_index++] = LSEQ_TOK;
				}
				else if(parsed_word[i] == "!="){
					token_code[tok_index++] = NOTEQ_TOK;
				}
				else if(parsed_word[i] == "&&"){
					token_code[tok_index++] = AND_TOK;
				}
				else if(parsed_word[i] == "||"){
					token_code[tok_index++] = OR_TOK;
				}
				else{
					token_code[tok_index++] = ID_TOK;
				}
				yytext = strncat(yytext,(const char*)parsed_word[i].c_str(),len);
			}
		}
	}
}