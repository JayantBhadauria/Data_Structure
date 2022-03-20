#include<bits/stdc++.h>
using namespace std;

string count_say(int n){
    if(n==1) return "1";
    if(n==2) return "11";
    string s="11";
    for(int i=3;i<=n;i++){
        int c=1;
        string t="";
        for(int j=1;j<=n;j++){
            if(s[j]!=s[j-1]){
                t=t+to_string(c);
                t+=s[j-1];
                c=1;
            }
            else{
                c++;
            }
        }
        s=t;
    }
    return s;
}

int main(){
    int n;
    cout<<"Number : ";
    cin>>n;
    cout<<"Count is "<<count_say(n);
    return 0;
}
