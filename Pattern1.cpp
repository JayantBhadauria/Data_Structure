#include<bits/stdc++.h>
using namespace std;
int main(){
	int i=0,j=0;
	int k;;
	for(i=1;i<=5;i++){
		k=1;
		for(j=i;j<=5;j++)
		cout<<k++<<" ";
		for(j=1;j<i;j++){
			cout<<"*"<<" ";
		}
		for(j=1;j<i;j++){
			cout<<"*"<<" ";
		}
		for (j=5;j>=i;j--)
		cout<<j<<" ";
		cout<<endl;
	}
}
