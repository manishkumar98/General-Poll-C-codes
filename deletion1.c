#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>
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
	void deletelist(struct node** head_ref){
		struct node* current=*head_ref;
		struct node* next;
		while(current!=NULL){
			next=current->next;
			free(current);
			current=next;

		}
		head_ref=NULL;
}
bool search(struct node* head,int x ){
	struct node* current=head;
	while(current!=NULL){
		if(current->data==x)
			return true;
		current=current->next;

	}
	return false;
}
bool recsearch(struct node* head,int x){
	if(head==NULL)
		return false;
	if(head->data==x)
		return true;
	return recsearch(head->next,x);

}
int recursivecountnode(struct node* head){
	if(head==NULL)
		return 0;
	else
		return 1+recursivecountnode(head->next);
}


int countnode(struct node* head_ref){
	struct node* temp=head_ref;
	int c=0;
	while(temp!=NULL){
		temp=temp->next;
		c++;
	}
	return c;
}

void deletenode(struct node** head_ref,int position){
	if(head_ref==NULL)
		return;
	struct node* temp=*head_ref;
	if(position==0){
		*head_ref=temp->next;
		free(temp);
		return;
	}
	//Find the previous of the node to be deleted
	for(int i=0;temp!=NULL&&i<position-1;i++)
		temp=temp->next;
	if(temp==NULL||temp->next==NULL)
		return;
	struct node* next=temp->next->next;
	free(temp->next);
	temp->next=next;
}
void printlist(struct node* n){
	while(n!=NULL){
		printf("%d\n",n->data);
		n=n->next;
	}
}
int main(){
	struct node* head=NULL;
	push(&head,7);
	push(&head,1);
	push(&head,3);
	push(&head,2);
	printf("Created link list");
	printlist(head);
	
	
	search(head,10)?printf("Yes\n"):printf("No\n");
	recsearch(head,7)?printf("Yes\n"):printf("No\n");
	
	printf("Count of node is%d\n",countnode(head));
	printf("Count of node recursively is%d\n",recursivecountnode(head));
	
	deletenode(&head,3);
	printf("\nLinked list after deletion of 3:");
	printlist(head);
	deletelist(&head);
	
	return 0;

}
