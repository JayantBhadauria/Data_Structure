#include<bits/stdc++.h>
using namespace std;
vector<string>subset(string s){
	int l=s.length(),i=0, y=0,t;
	string ans;
	vector<string>res;
	for(i=1;i<(1<<l);i++){
		y=0;
		t=i;
		ans="";
		while(t){
			if(t&1==1){
				ans+=s[y];
			}
			y++;
			t>>=1;
		}
		res.push_back(ans);
	}
	return res;
}
int main(){
	cout<<"Enter string : ";
	string s;
	cin>>s;
	vector<string>ans=subset(s);
	for(auto x:ans){
		cout<<x<<endl;
	}
	
}
