#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
int  main(void){
	struct node* head=NULL;
	struct node* second=NULL;
	struct node* third=NULL;
	
	head=(struct node*)malloc(sizeof(struct node));
	second=(struct node*)malloc(sizeof(struct node));
	third=(struct node*)malloc(sizeof(struct node));
	printf("%p\n",head);
	printf("%p\n",second);
	printf("%p\n",third);
	return 0;
}