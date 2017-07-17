#include <bits/stdc++.h>
#include "tok.h"
#include <stdlib.h>
#include <deque>
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
deque<char> mydeque;
unsigned int tok_index,yytext_index,string_index;
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
	printf("%s\n",yytext );
	return 0;
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
	string *parsed_word = parse(fp);
	for (int i = 0; i <= string_index; ++i)
	{
		cout<<i<<" --> "<<parsed_word[i]<<"\tLength = "<<parsed_word[i].length()<<endl;
	}
	cout<<endl;
}