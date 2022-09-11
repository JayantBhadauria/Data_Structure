#include<bits/stdc++.h>
using namespace std;
int square(long long n){
	n=abs(n);
	if(n==1){
		return 1;
	}
	if(n==0){
		return 0;
	}
	long long ans=0,sum=0;
	for(long long i=30;i>=0;i--){
		if((sum+(1<<i))<=n){
			sum+=(1<<i);
			ans+=(n<<i);
		}
	}
	return ans;
}
int main(){
	int n;
	cout<<"Enter n : ";
	cin>>n;
	cout<<"Square of "<<n<<" is : "<<square(n);
	return 0;
}
