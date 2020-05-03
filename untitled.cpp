#include<bits/stdc++.h>
using namespace std;
void print_set(vector<int> A){
	sort(A.begin(),A.end());
	for(int i=0;i<(int)A.size()-1;++i){
		assert(A[i]!=A[i+1]);
	}
	for(int x:A)
		cout<<x<<" ";
	cout<<"\n";


}
int main(){
	int a,b;
	cin>>a>>b;
	int s=a+b;
	int used=0;
	int k=1;
	while(used+k<=s){
		used+=k;
		++k;

	}
	cout<<k;
	vector<int>A,B;
	for(int i=k;i>=1;i--){
		if(i<=a){
			A.push_back(i);
		
		a-=1;
	}
		else{
			B.push_back(i);
			assert(b>=i);
			b-=i;
		}
	}
	print_set(A);
	print_set(B);

}