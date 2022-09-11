#include<bits/stdc++.h>
using namespace std;

unsigned int Swapbits(unsigned int n){
    unsigned int od=0x55555555,ev=0xAAAAAAAA,even,odd;
	even=(ev&n);
	odd=(od&n);
	odd<<=1;
	even>>=1;
	n=(odd | even);
	return n;
}
int main(){
	unsigned int n;
	cout<<"Enter n : ";
	cin>>n;
	cout<<"Updated n : "<<Swapbits(n);
	return 0;
}
