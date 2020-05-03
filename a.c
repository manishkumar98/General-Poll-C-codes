#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node* next;
struct Node* prev;

};

struct Node* getnewnode(int x){
	struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
	newnode->data=x;
	newnode->prev=NULL;
	newnode->next=NULL;
}
int main(){
	int num=0;
	char dir=' ';
	int lenshift=0;
	struct Node* head=NULL;
	struct Node* temp=NULL;
	int len=0;
	do{
		int n=0;
		scanf("%d",&n);
		insertathead(head,n);
		len++;


	}while(getchar()!=10);
	scanf("%d",&num);
	scanf("%c",&dir);
	if(dir=='L'){
		int rem=num%len;
		lenshift=len-rem;
		
	}
	if(dir=='R'){
		int rem=num%len;
		lenshift=rem;

	}
	shift(head,lenshift);
	printlist();
	return 0;
}
void insertathead(struct Node* head,int data){
	struct Node* newnode=getnewnode(data);
	
	head->prev=newnode;
	newnode->next=head;
	head=newnode;
}
void shift(struct Node *head,int n){
	struct Node* temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	struct Node* last=temp;
	last->next=head;
	last=head;
	last->next=NULL;
	temp=head->next;
	head=temp;
	head->prev=NULL;



}
void printlist(struct Node* head){
	struct Node* temp=head;
	while(temp->next!=NULL){
		printf("%d",temp->data);
		temp=temp->next;
	}


}