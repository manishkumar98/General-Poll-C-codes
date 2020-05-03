//call by reference
#include<stdio.h>
void display(int*);
void show(int*);
int main(){
	int i;
	int marks[]={55,65,75,56,87,97};
	for(i=0;i<=5;i++)
		display(&marks[i]);
	return 0;

	

}
void display(int *m){
	printf("%d\n",*m);
	printf("%d\n",m);
	printf("%d\n",&m);
	show(m);
}
void show(int *x){
printf("%d\n",*x);
printf("%d\n",x);
printf("%d\n",&x);


}