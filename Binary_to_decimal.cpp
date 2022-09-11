#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i=0,res=0,pwr=1,val=1;
	cout<<"Binary number : ";
	cin>>n;
	while(n){
		res=((val)*((n%10)&1))+res;
		val<<=1;
	 	n/=10;
	}
	cout<<"Decimal is : "<<res;
}
