#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>
struct node{
	int data;
	struct node* next;

};
void push(struct node** head_ref,int new_data)

{
	struct node* new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=new_data;
	new_node->next=(*head_ref);
	*head_ref=new_node;

}
int detectloop(struct node* list)
{
	struct node* slow_p=list;
	struct node* fast_p=list;
	while((slow_p!=fast_p)||fast_p!=NULL)
	{
		slow_p=slow_p->next;
		fast_p=fast_p->next->next;
		if(slow_p==fast_p)
		{
			printf("Loop found");
			return 1;
		}

	}
	
	return 0;
}
	int main()
	{
		struct node* head=NULL;
		push(&head,20);
		push(&head,4);
		push(&head,15);
		push(&head,10);
		head->next->next->next->next=head;
		int a=detectloop(head);
		return 0;

	}