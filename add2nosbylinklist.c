#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>
struct node{
	int data;
	struct node* next;
};

void push(struct node** head_ref,int new_data){

	struct node* new_node=newnode(new_data);
	
	new_node->next=(*head_ref);
	(*head_ref)=new_node;
}
struct node *newnode(int data){
	struct node* new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=data;
	new_node->next=NULL;
	return new_node;

}

struct node* addtwolist(struct node* first,struct node* second){
	struct node* temp=NULL;
	struct node* prev=NULL;
	struct node* res=NULL;
	int carry=0;
	int sum=0;
	while(first!=NULL||second!=NULL){
		sum=carry+(first?first->data:0)+(second?second->data:0);
		carry=(sum>=10)?1:0;
		sum=sum%10;
		temp=newnode(sum);
		if(res==NULL)
			res=temp;
		else
			prev->next=temp;
		prev=temp;
		if(first)
			first=first->next;
		if(second)
			second=second->next;
	}
	if(carry>0)
		temp->next=newnode(carry);

		return res;
	}

void printlist(struct node* n){
	while(n!=NULL){
		printf("%d\n",n->data);
		n=n->next;
	}
}



int main(void)
	{
		struct node* res=NULL;
		struct node* first=NULL;
		struct node* second=NULL;
		push(&first,6);
		push(&first,4);
		push(&first,9);
		push(&first,5);
		push(&first,7);
		printf("Fisr list is");
		printlist(first);
		push(&second,4);
		push(&second,8);
		printf("Second list is");
		printlist(second);
		res=addtwolist(first,second);
		printf("The resultant list is");
		printlist(res);
		return 0;


	}