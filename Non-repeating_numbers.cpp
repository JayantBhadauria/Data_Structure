#include<bits/stdc++.h>
using namespace std;
void nonRepeating(int arr[],int n){
	int a=0,a1=0,a2=0,tem=0;
	for(int i=0;i<n;i++){
		tem^=arr[i];
	}
	a=tem&~(tem-1);  //It will return the number having rightmost bit is set.
	for(int i=0;i<n;i++){
		if(arr[i]&a){
			a1^=arr[i];
		}
		else{
			a2^=arr[i];
		}
	}
	cout<<a1<<", "<<a2<<" ";
}
int main(){
	int n,i=0;
	cout<<"Size : ";
	cin>>n;
	int arr[n];
	cout<<"Enter "<<n<<" values : \n";
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Non-repeating numbers are : ";
	nonRepeating(arr,n);
	return 0;
}
