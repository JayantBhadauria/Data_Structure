#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,ans=0;
	cout<<"Enter n : ";
	cin>>n;
	for(int i=31;i>=0;i--){
		if(n & 1 ==1)
		ans+=pow(2,i);
		n>>=1;
	}
	cout<<"Reverse is : "<< ans;
}
