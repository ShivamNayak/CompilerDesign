#include <bits/stdc++.h>
#include <stdlib.h>
#include <cstring>
using namespace std;
#define EMPTY -1
#define START 0
int construct_dfa(FILE *fp);
int *state_sequence = new int[2000];
int state_index = 0;
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
	memset(state_sequence,EMPTY,8000);
	cout<<"\nFinal State = "<<construct_dfa(fp)<<endl;
	for (int i = 0; i <= state_index; ++i)
	{
		cout<<state_sequence[i]<<" ";
	}
	cout<<endl;
	return 0;
}
int construct_dfa(FILE *fp){
	char charecter;
	int current_state = START;
	while (!feof(fp)){
		charecter = getc(fp);
		if ((int)charecter == -1)
			break;
		switch(current_state){
			case 0:
				if(charecter == 'f'){
					current_state = 1;
				}
				else if(charecter == 'w'){
					current_state = 4;
				}
				else if(charecter == 'i'){
					current_state = 9;
				}
				else if(charecter == 'e'){
					current_state = 11;
				}
				else if((charecter >= 'a' && charecter <= 'd') || (charecter == 'g' || charecter == 'h') || 
					(charecter >='j' && charecter <= 'v') || (charecter >= 'x' && charecter <= 'z') || 
					(charecter >= 'A' && charecter <= 'Z') || ((charecter-'0' >= 0) && (charecter-'0' <= 9))){
					current_state = 15;
				}
				else if(charecter == '+'){
					current_state = 16;
				}
				else if(charecter == '-'){
					current_state = 19;
				}
				else if(charecter == '*'){
					current_state = 22;
				}
				else if(charecter == '/'){
					current_state = 24;
				}
				else if(charecter == '='){
					current_state = 26;
				}
				else if(charecter == ';' || current_state == ','){
					current_state = START;
				}
				else if(charecter == '>'){
					current_state = 28;
				}
				else if(charecter == '<'){
					current_state = 31;
				}
				else if(charecter == '!'){
					current_state = 34;
				}
				else if(charecter == '|'){
					current_state = 36;
				}
				else if(charecter == '&'){
					current_state = 39;
				}
				else if(charecter == '^'){
					current_state = 42;
				}
				else if(charecter == '('){
					current_state = 44;
				}
				else if(charecter == '{'){
					current_state = 45;
				}
				else if(charecter == ')'){
					current_state = 46;
				}
				else if(charecter == '}'){
					current_state = 47;
				}
				else if(charecter == ' '){
					current_state = 48;
				}
				break;
			case 1:
				if(charecter == 'o'){
					current_state = 2;
				}
				else{
					fseek(fp,-1,SEEK_CUR);
					current_state = START;
				}
				break;
			case 2:
				if(charecter == 'r'){
					current_state = 3;
				}
				else{
					fseek(fp,-1,SEEK_CUR);
					current_state = START;
				}
				break;
			case 3:
				fseek(fp,-1,SEEK_CUR);
				current_state = START;
				break;
			case 4:
				if(charecter == 'h'){
					current_state = 5;
				}
				else{
					fseek(fp,-1,SEEK_CUR);
					current_state = START;
				}
				break;
			case 5:
				if(charecter == 'i'){
					current_state = 6;
				}
				else{
					fseek(fp,-1,SEEK_CUR);
					current_state = START;
				}
				break;
			case 6:
				if(charecter == 'l' ){
					current_state = 7;
				}
				else{
					fseek(fp,-1,SEEK_CUR);
					current_state = START;
				}
				break;
			case 7:
				if(charecter == 'e'){
					current_state = 8;
				}
				else{
					fseek(fp,-1,SEEK_CUR);
					current_state = START;
				}
				break;
			case 8:
				fseek(fp,-1,SEEK_CUR);
				current_state = START;
				break;
			case 9:
				if(charecter == 'f'){
					current_state = 10;
				}
				else{
					fseek(fp,-1,SEEK_CUR);
					current_state = START;
				}
				break;
			case 10:
				fseek(fp,-1,SEEK_CUR);
				current_state = START;
				break;
			case 11:
				if(charecter == 'l'){
					current_state = 12;
				}
				else{
					fseek(fp,-1,SEEK_CUR);
					current_state = START;
				}
				break;
			case 12:
				if(charecter == 's'){
					current_state = 13;
				}
				else{
					fseek(fp,-1,SEEK_CUR);
					current_state = START;
				}
				break;
			case 13:
				if(charecter == 'e'){
					current_state = 14;
				}
				else{
					fseek(fp,-1,SEEK_CUR);
					current_state = START;
				}
				break;
			case 14:
				fseek(fp,-1,SEEK_CUR);
				current_state = START;
				break;
			case 15:
				if ((charecter >= 'a' && charecter <= 'z') || (charecter >= 'A' && charecter <= 'Z')||
					((charecter-'0' >= 0)&&(charecter - '0' <= 9))){
					current_state = 15;
				}
				else{
					fseek(fp,-1,SEEK_CUR);
					current_state = START;
				}
				break;
			case 16:
				if(charecter == '+'){
					current_state = 17;
				}
				else if(charecter == '='){
					current_state = 18;
				}
				else{
					fseek(fp,-1,SEEK_CUR);
					current_state = START;
				}
				break;
			case 17:
				fseek(fp,-1,SEEK_CUR);
				current_state = START;
				break;
			case 18:
				fseek(fp,-1,SEEK_CUR);
				current_state = START;
				break;
			case 19:
				if(charecter == '-'){
					current_state = 20;
				}
				else if(charecter == '='){
					current_state = 21;
				}
				else{
					fseek(fp,-1,SEEK_CUR);
					current_state = START;
				}
				break;
			case 20:
				fseek(fp,-1,SEEK_CUR);
				current_state = START;
				break;
			case 21:
				fseek(fp,-1,SEEK_CUR);
				current_state = START;
				break;
			case 22:	// multiplication
				if(charecter == '='){
					current_state = 23;
				}
				else{
					fseek(fp,-1,SEEK_CUR);
					current_state = START;
				}
				break;
			case 23:
				fseek(fp,-1,SEEK_CUR);
				current_state = START;
				break;
			case 24:
				if(charecter == '='){
					current_state = 25; 
				}
				else{
					fseek(fp,-1,SEEK_CUR);
					current_state = START;
				}
				break;
			case 25:
				fseek(fp,-1,SEEK_CUR);
				current_state = START;
				break;
			case 26:
				if(charecter == '='){
					current_state = 27;
				}
				else{
					fseek(fp,-1,SEEK_CUR);
					current_state = START;
				}
				break;
			case 27:
				fseek(fp,-1,SEEK_CUR);
				current_state = START;
				break;
			case 28:	//greater than 
				if(charecter == '='){
					current_state = 29;
				}
				else if(charecter == '>'){
					current_state = 30;
				}
				else{
					fseek(fp,-1,SEEK_CUR);
					current_state = START;
				}
				break;
			case 29:
				fseek(fp,-1,SEEK_CUR);
				current_state = START;
				break;
			case 30:
				fseek(fp,-1,SEEK_CUR);
				current_state = START;
				break;
			case 31: // less than
				if(charecter == '='){
					current_state = 32;
				}
				else if(charecter == '<'){
					current_state = 33;
				}
				else{
					fseek(fp,-1,SEEK_CUR);
					current_state = 0;
				}
				break;
			case 32:
				fseek(fp,-1,SEEK_CUR);
				current_state = START;
				break;
			case 33:
				fseek(fp,-1,SEEK_CUR);
				current_state = START;
				break;
			case 34:
				if(charecter == '='){
					current_state = 35;
				}
				break;
			case 35:
				fseek(fp,-1,SEEK_CUR);
				current_state = START;
				break;
			case 36:
				if(charecter == '|'){
					current_state = 37;
				}
				else if(charecter == '='){
					current_state = 38;
				}
				else{
					fseek(fp,-1,SEEK_CUR);
					current_state = START;
				}
				break;
			case 37:
				fseek(fp,-1,SEEK_CUR);
				current_state = START;
				break;
			case 38:
				fseek(fp,-1,SEEK_CUR);
				current_state = START;
				break;
			case 39:
				if(charecter == '&'){
					current_state = 40;
				}
				else if(charecter == '='){
					current_state = 41;
				}
				else{
					fseek(fp,-1,SEEK_CUR);
					current_state = START;
				}
				break;
			case 40:
				fseek(fp,-1,SEEK_CUR);
				current_state = START;
				break;
			case 41:
				fseek(fp,-1,SEEK_CUR);
				current_state = START;
				break;
			case 42:
				if(charecter == '='){
					current_state = 43;
				}
				else{
					fseek(fp,-1,SEEK_CUR);
					current_state = START;
				}
				break;
			case 43:
				fseek(fp,-1,SEEK_CUR);
				current_state = START;
				break;
			case 44:
				fseek(fp,-1,SEEK_CUR);
				current_state = START;
				break;
			case 45:
				fseek(fp,-1,SEEK_CUR);
				current_state = START;
				break;
			case 46:
				fseek(fp,-1,SEEK_CUR);
				current_state = START;
				break;
			case 47:	
				fseek(fp,-1,SEEK_CUR);
				current_state = START;
				break;
			case 48:
				if(charecter == ' '){
					current_state = 48;
				}
				else{
					fseek(fp,-1,SEEK_CUR);
					current_state = START;
				}
				break;
			default:
				cout<<"May be EOF reached"<<endl;
				break;
		}
		if(state_index == 0){
			state_sequence[state_index++] = current_state;
		}
		else if(state_sequence[state_index-1] != current_state){
			state_sequence[state_index++] = current_state;
		}
	}
	state_index--;
	return current_state;
}