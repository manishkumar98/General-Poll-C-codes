#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	char str[1000];
	gets(str);
	
	char piece2[1000];
	char str1[1000];
	char* piece=strtok(str," ");
	while(piece!=NULL){
		
		
		if(strcmp(piece,piece2)==0){
			strcat(str1,piece);
			strcat(str1," ");
		}


		printf("%s\n",piece2);
		piece=strtok(NULL," ");
	}
	
	return 0;
}