#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>subset(vector<int>v){
	int len=v.size();
	int s=1<<len,x=0,y=0;
	vector<vector<int>>ans={};
	vector<int>tem={};
	for(int i=0;i<s;i++){
		x=i;
		y=0;
		tem={};
		while(x){
			if(x&1==1){
				tem.push_back(v[y]);
			}
			x>>=1;
			y++;
		}
		ans.push_back(tem);
	}
	return ans;
}

int main(){
	vector<int>v;
	int n,x;
	cout<<"size : ";
	cin>>n;
	cout<<"Enter "<<n<<" numbers : \n";
	for(int i=0;i<n;i++){
		cin>>x;
		v.push_back(x);
	}
	cout<<"Subsets are : \n";
	
	vector<vector<int>>ans=subset(v);
	for(auto x:ans){
		for(auto y:x){
			cout<<y<<" ";
		}
		cout<<endl;
	}
}
