#include<stdio.h>
#include<stdlib.h>
struct x{
	int a;
	int b;
};
int main(){
	struct x x1={10,20};
	struct x x2=x1;
	if(x1==x2)
	printf("Same");
	else
		printf("Not same");
}

	