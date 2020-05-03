#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* next;
};
void push(struct node** head_ref,int new_data){
	struct node* new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=new_data;
	new_node->next=(*head_ref);
	(*head_ref)=new_node; 
}
int main(){
	struct node* head=NULL;
	append(&head,6);
	push(&head,7);
	push(&head,1);
	append(&head,4);
	insertAfter(head->next,8);
	print("Created linked list\n");
	printList(head);
	return 0;

}
void append(struct node** head_ref,int new_data){
	struct node* new_node=(struct node*)malloc(sizeof(struct node));
	struct node* last=*head_ref;
	
}
void printList(struct node* a){
	while(a!=NULL){
		printf("%d",a->data);
		a=a->next;
	}
}