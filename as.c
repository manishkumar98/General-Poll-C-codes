#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include<stdbool.h>
#include<limits.h>
struct node{
	int data;
	struct node* next;
}node;
int main(void){
	int num=0;

	struct node* n=malloc(sizeof(struct node));
	printf("Enter numbers");
	while(true){
		scanf("%d\n",&num);
		if(num==INT_MAX)
			break;
		else
		{
			struct node* a=malloc(sizeof(node));
			n->next=a;
			a->data=num;
			a->next=NULL;
			n=a;
		}
	}
}
