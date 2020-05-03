//call by reference
#include<stdio.h>
void display(int*);
int main(){
	int i;
	int marks[]={55,65,75,56,87,87};
	for(i=0;i<=5;i++)
		display(&marks[i]);
	return 0;

	

}
void display(int *m){
	printf("%d,",*m);
}
