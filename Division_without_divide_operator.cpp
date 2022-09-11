#include<bits/stdc++.h>
using namespace std;
int Division(long long a,long long b){
	long long i=31,sign =1, tem=0, ans=0;
	if((a<0 and b>0)|| (a>0 and b<0)){
		sign =-1;
	}
	a=abs(a);
	b=abs(b);
	for(i=31;i>=0;i--){
		if((tem+(b<<i))<=a){
			tem+=b<<i;
			ans+=1<<i;
		}
	}
	return (sign * ans);
}
int main(){
	int a,b;
	cout<<"Enter a : ";
	cin>>a;
	cout<<"Enter b : ";
	cin>>b;
	cout<<"Division : "<<Division(a,b);
	return 0;
	
}
