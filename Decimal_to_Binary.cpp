#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i=0,res=0,pwr=1;
	cout<<"Decimal number : ";
	cin>>n;
	while(n){
		res=res+(n&1)*pwr;
		pwr*=10;
	 	n>>=1;
	}
	cout<<"Binary is : "<<res;
}
