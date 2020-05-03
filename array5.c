#include<stdio.h>
int main(){
int i=4,*j,*k;
j=&i;
printf("j %d\n",j);
j=j+1;
printf("j %d\n",j);
j=j+9;
printf("j %d\n",j);
k=j+3;
printf("k %d\n",k);
printf("%d %d\n", );
}