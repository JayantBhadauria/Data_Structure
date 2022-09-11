#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,res=0;
	cout<<"Binary : ";
	cin>>n;
	while(n){
		if(n&1==1){
			res++;
		}
		n>>=1;
	}
	cout<<"No of 1's : "<< res;
}
