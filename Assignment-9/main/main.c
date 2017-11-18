#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
char registers[7] = {'B','C','D','E','H','L','\0'};
char variable[123];
int var_count = 0;
char lookup_insert(char *var);
int search(char *var);
void display_reg(void);
int main(int argc, char const *argv[])
{
	FILE *fp = fopen(argv[1],"r");
	char buffer[20];
	int length = 0;
	int byte = 0;
	char *lhs,*rhs,reg1,reg2;
	int if_occurance = 0;
	while (fscanf(fp,"%s",buffer) != EOF){
		if(strncmp(buffer,"if",2) == 0){
			// load first var into acc and call CMP and call JC 
			byte = fscanf(fp,"%s",buffer);
			buffer[strlen(buffer) - 1] = '\0';
			char *t1,*t2,*t3;
			t1 = strstr(buffer,">");
			t2 = strstr(buffer,"<");
			t3 = strstr(buffer,"==");
			if (t1){
				strcpy(rhs,t1+1);
				*t1 = '\0';
				strcpy(lhs,buffer+1);
			}
			else if(t2){
				strcpy(rhs,t2+1);
				*t2 = '\0';
				strcpy(lhs,buffer+1);
			}
			else if(t3){
				strcpy(rhs,t3+2);
				*t3 = '\0';
				strcpy(lhs,buffer+1);
			}
			printf("%s ","MVI\0" );
			reg2 = lookup_insert(rhs);
			printf("%c\n",reg2 );
			printf("%s ","CMP" );
			reg1 = lookup_insert(lhs);
			printf("%c\n",reg1 );
			if_occurance = 1;
		}
		else if(strncmp(buffer,"goto",4) == 0){
			if (if_occurance){
				printf("%s ","JC\0" );
				if_occurance = 0;
			}
			else{
				printf("%s ","JMP\0" );
			}
		}
		else if(strncmp(buffer,"NEXT",4) == 0){
			printf("%s\n",buffer );
		}
		else if(buffer[0] == 'L'){
			printf("%s\n",buffer );
		}
		else{
			char *temp = NULL;
			char *lhs_op = (char *)malloc(10);
			char *rhs_op = (char *)malloc(10);
			rhs = (char *)malloc(10);
			lhs = (char *)malloc(10);
			if ((temp = strstr(buffer,"=")) != NULL){
				strcpy(rhs,temp+1);
				*temp = '\0';
				strcpy(lhs,buffer);
				reg1 = lookup_insert(lhs); //lookup_insert or insert
				char temp_reg1,temp_reg2;
				if (isdigit(rhs[0])){
					printf("%s ","MVI\0" );
					printf("%c ",reg1 );
					printf("%s\n",rhs );
				}
				else if((temp = strstr(rhs,"+")) != NULL){
					strcpy(rhs_op,temp+1);
					*temp = '\0';
					strcpy(lhs_op,rhs);
					//printf("ADD-> LHS: %s RHS: %s\n",lhs_op,rhs_op );
					temp_reg1 = lookup_insert(lhs_op);
					temp_reg2 = lookup_insert(rhs_op);
					printf("%s ","MVI\0" );
					printf("%c\n",temp_reg1 );
					printf("%s ","ADD\0" );
					printf("%c\n",temp_reg2 );
					printf("%s ","MOV\0" );
					printf("%c %c\n",reg1,'A' ); 
				}
				else if((temp = strstr(rhs,"-")) != NULL){
					strcpy(rhs_op,temp+1);
					*temp = '\0';
					strcpy(lhs_op,rhs);
					temp_reg1 = lookup_insert(lhs_op);
					temp_reg2 = lookup_insert(rhs_op); 
					printf("%s ","MVI\0" );
					printf("%c\n",temp_reg1 );
					printf("%s ","SUB\0" );
					printf("%c\n",temp_reg2 );
					printf("%s ","MOV\0" );
					printf("%c %c\n",reg1,'A' ); 	
				}
				else{
					if(!search(rhs)){
						reg2 = lookup_insert(rhs);
						printf("%s ","MOV\0" );
						printf("%c ",reg2 );
						printf("%s\n",rhs );
					}
					reg2 = lookup_insert(rhs);
					printf("%s ","MOV\0" );
					printf("%c ",reg1);
					printf("%c\n",reg2);
				}
			}
		}
	}
	display_reg();
	return 0;
}
char lookup_insert(char *var){
	if (strlen(var) == 1){ //97 - 122
		if (variable[var[0]] != '\0'){
			return variable[var[0]];
		}
		else{
			if(var_count <= 5){
				variable[var[0]] = registers[var_count];
				var_count++;
				return variable[var[0]];
			}
			else{
				printf("%s\n","Register overflow\0" );
				var_count = 0;
				printf("Overwrite register: %c\n",registers[var_count] );
				variable[var[0]] = registers[var_count];
				return variable[var[0]];
			}
		}
	}
	else if(strlen(var) > 1){ //0 - 96
		int index = var[1] - '0';
		if (variable[index] != '\0'){
			return variable[index];
		}
		else{
			if(var_count <= 5){
				variable[index] = registers[var_count];
				var_count++;
				return variable[index];
			}
			else{
				printf("%s\n","Register overflow\0" );
				var_count = 0;
				printf("Overwrite register: %c\n",registers[var_count] );
				variable[index] = registers[var_count];
				return variable[index];
			}
		}
	}
}
int search(char *var){
	if (strlen(var) == 1){
		return variable[var[0]] != '\0';
	}
	if (strlen(var) > 1){
		return variable[var[1] - '0'] != '\0';
	}
}
void display_reg(void){
	printf("\t\t%s\n\n","Variable to Register mapping :)" );
	for (int i = 0; i <= 96; ++i)
	{
		if (variable[i] != '\0'){
			printf("t%d map to: %c\n",i,variable[i]);
		}
	}
	for (int i = 97; i <= 122; ++i)
	{
		if (variable[i] != '\0'){
			printf("%c map to: %c\n",i,variable[i]);
		}
	}
}