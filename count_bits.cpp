#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter a number : ";
	cin>>n;
//	int i=n,count=0,K;
//	cout<<"Enter Kth value :";
//	cin>>K;
//        while(i!=0){
//            count++;
//            i>>=1;
//        }
//		cout<<"Bits count : "<<count;
//		cout<<"\nNew value : "<<((1<<(count-K))|n);
	cout<<"Set bit position : "<<(n&~(n-1));

	
	return 0;
}
