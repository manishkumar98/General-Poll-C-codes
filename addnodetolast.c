#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include<stdbool.h>
#include<limits.h>
struct node{
	int data;
	struct node* next;
};
int main(void){
	struct node* head=NULL;
	struct node* second=NULL;
	struct node* third=NULL;
	
	head=(struct node*)malloc(sizeof(struct node));
	second=(struct node*)malloc(sizeof(struct node));
	third=(struct node*)malloc(sizeof(struct node));
	head->data=1;
	second->data=2;
	third->data=3;

	printf("%p\n",head);
	printf("%p\n",second);
	printf("%p\n",third);
	printf("%d\n",head->data);
	printf("%d\n",second->data);
	printf("%d\n",third->data);

	head->next=second;
	second->next=third;
	third->next=NULL;


	printf("%p\n",head->next);
	printf("%p\n",second->next);
	printf("%p\n",third->next);


	

	//Insert a node at last with value of 99

	struct node* y=NULL;
	y=(struct node*)malloc(sizeof(struct node));
	int c=99;
	struct node* n1=head;
	int f=0;
	while(n1!=NULL){
		if(n1->next==NULL){
			n1->next=y;
		y->data=c;
		y->next=NULL;
		}
		
		
		n1=n1->next;
	}
	
	


	printf("PRINT LIST\n");
	struct node* n=head;
	while(n!=NULL){
		printf("%d\n and address of next stored is%p\n",n->data,n->next);
		n=n->next;
	}
}