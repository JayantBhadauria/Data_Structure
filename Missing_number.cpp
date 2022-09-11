#include<bits/stdc++.h>
using namespace std;
int Missing(vector<int>&v){
	sort(v.begin(),v.end());
	int i=0,len=v.size();
	for(i=0;i<=len;i++){
		if(i>=len or v[i]!=i){
			break;
		}
	}
	return i;
}
int main(){
	int size,value,i=0;
	vector<int>v;
	cout<<"Enter size of vector : ";
	cin>>size;
	cout<<"Enter "<<size<<" values from 0 to "<<size <<" with one missing number : \n";
	for(i=0;i<size;i++){
		cin>>value;
		v.push_back(value);
	}
	cout<<"Missing number is : "<<Missing(v);
	return 0;
}
