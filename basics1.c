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


	printf("PRINT LIST\n");
	struct node* n=head;
	while(n!=NULL){
		printf("%d\n",n->data);
		n=n->next;
	}
	
	return 0;
}