#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main() {
    int i=0,k=0,l=0,sum=0,max=0,n1=0;
    scanf("%d",&n1);
    int A[n1];
    int B[n1][n1];
    int C[n1];
    int arrlen[n1];
    for(int i=0;i<n1;i++){
        A[i]=0;
        C[i]=0;
        arrlen[i]=0;
        for(int j=0;j<n1;j++){
            B[i][j]=0;
        }
    }
    // memset(B,0,n1*n1*sizeof(B[0]));
     //memset(C,0,n1*sizeof(C[0]));
      //memset(arrlen,0,n1*sizeof(arrlen[0]));
        //                                                                           memset(A,0,n1*sizeof(A[0]));
   
    for(int i=0;i<n1;i++){
        scanf("%d",&A[i]);
    }
   
    for(i=0;i<n1;i++){
        if(A[i]>=0){
            sum+=A[i];
            B[k][l]=A[i];
            C[k]=sum;
            arrlen[k]++;
            l++;
        }
        else{
            sum=0;
            k++;
            l=0;
        }
    }
    for(i=1;i<k;i++){
        if(C[i]>C[max]){
            max=i;
        }
        if(C[i]==C[max]){
            if(arrlen[i]>arrlen[max])
            max=i;
           
        }
        
        
    }
    int ans[arrlen[max]];
    int lenx=arrlen[max];
    for(i=0;i<arrlen[max];i++){
        ans[i]=B[max][i];
    }
    for(int i=0;lenx;i++){
        printf("%d",ans[i]);
    }
}
