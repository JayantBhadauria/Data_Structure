#include<bits/stdc++.h>
using namespace std;
int count(int n){
	int ans=0,v=0;
	while(n){
		if(n&1==1){
			v++;
		}
		else{
			ans=max(ans,v);
			v=0;
		}
		n>>=1;
	}
	return max(ans,v);
}
int main(){
	int n;
	cout<<"Enter n : ";
	cin>>n;
	cout<<"Max 1's count : "<<count(n);
	return 0;
}
