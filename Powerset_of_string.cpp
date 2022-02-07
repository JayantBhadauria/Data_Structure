#include<bits/stdc++.h>
using namespace std;
void powerset(string cur,string s,int i){
    if(i==s.length()){
        cout<<cur<<endl;
        return;
    }
    powerset(cur+s[i],s,i+1);
    powerset(cur,s,i+1);
    return;
}
int main(){
    string s,tem;
    cout<<"String : ";
    cin>>s;
    powerset(tem,s,0);
}