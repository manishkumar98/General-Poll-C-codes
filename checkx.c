#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int n=0;
	scanf("%d ",&n);
	int arr[n];
	memset(arr,0,n*sizeof(arr[0]));
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	
	int j=0,max=-1001,sum=0;
	for(int i=0;i<n;i++){
		j=i;
		sum=0;
		while(j<n){
			sum+=arr[j];
			if(sum>max){
			max=sum;
			
		}

		
		j++;
		}

	}
	printf("%d",max);
	return 0;
}