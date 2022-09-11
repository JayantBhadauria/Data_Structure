#include<bits/stdc++.h>
using namespace std;
int main(){
	int x=1,n,i;
	cout<<"Enter a number : ";
	cin>>n;
	cout<<"Enter ith value : ";
	cin>>i;
	if((x<<i)&n){
		cout<<i<<" th bit is 1";
	}
	else{
		cout<<i<<" th bit is 0";
	}
	return 0;
}
