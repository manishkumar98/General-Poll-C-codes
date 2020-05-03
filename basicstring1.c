#include <stdio.h>
int main(){
	char str[1000];
	int i,c=0;
	printf("\nEnter a string");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		c++;
	}	
	printf("\nLength =%d",c);
}
	
	
	