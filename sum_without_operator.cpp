#include<bits/stdc++.h>
using namespace std;
int sum(int a,int b){
	unsigned c=1;  // unsigned is use to avoid overflow during left shifting.
	int sum=0;
	while(c){
		sum=a^b;
		c=a&b;
		a=sum;
		b=c<<1;
	}
	return sum;
}
int main(){
	int a,b;
	cout<<"Enter a: ";
	cin>>a;
	cout<<"Enter b: ";
	cin>>b;
	cout<<"Sum is : "<<sum(a,b);
	return 0;
}
