#include<stdio.h>
int main(){
	char str[1000];
	printf("\nEnter your name");
	gets(str);
	printf("\nYour name is");
	puts(str);
	int x='a';
	char y='b';
	int z=y-x;
	printf("\n%d",x);
	return 0;
}