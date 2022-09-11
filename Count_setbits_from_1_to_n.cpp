#include<bits/stdc++.h>
using namespace std;
//int setBit(int x){
//	int count=0,i=0;
//	while(x){
//		x=x&(x-1);
//		count++;
//	}
//	return count;
//}
int largestPwr(int n){
	int i=0;
	while((1<<i)<=n){
		i++;
	}
	return i-1;
}

int findPwr(int n){
	if(n==0){
		return 0;
	}
	int l=largestPwr(n);
	return (pow(2,l-1)*l)+(n-pow(2,l)+1)+findPwr(n-pow(2,l));
}
int main(){
	cout<<"Enter size : ";
	int n,sum=0;
	cin>>n;
//	for(int i=0;i<n;i++){
//		sum+=setBit(n);
//	}
	
	sum=findPwr(n);
	cout<<"No. of set bits : "<<sum;
}
