#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include<stdbool.h>
#include<limits.h>
typedef struct node{
	int number;
	struct node* next;

}
node;




int main(void)
{
	//memory for numbers
	node* numbers=NULL;//initially numbers pointing to null
	//promt number till eof
	while(true){
		int number;
		scanf("%d\n",&number);
		printf("%d\n",number);
		if(number==INT_MAX){
			printf("No more input");
			break;

		}
		node* n=malloc(sizeof(node));
		printf("Allocated address%p\n",n );
		printf("Asked for Allocated memory");
		if(n==NULL){
			printf("No memory allocated");
			return 1;
		}
		n->number=number;
		printf("n->number=%d",n->number);
		n->next=NULL;
		if(numbers!=NULL){
			for(node* ptr=numbers;ptr!=NULL;ptr=ptr->next){
				if(ptr->next==NULL){
					ptr->next=n;
					printf("ptr->next=%p",n);
					break;
				}
			}
		}
		else
		{
			numbers=n;
		}

		
	}
}