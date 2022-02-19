#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,ans;
    cout<<"Enter string : ";
    cin>>s;
    int len=s.length(),i=0,k;
    cout<<"Enter value of K : ";
    cin>>k;
    stack<char>st;
    if(k>=len){
        cout<<"Empty string .";
        return  0;
    }
    for(i=0;i<len;i++){
        if(k==0){
            st.push(s[i]);
        }
        else {
            while(st.empty()==false and st.top()>s[i] and k>0){
                st.pop();
                k--;
            }
            st.push(s[i]);
        }
        
    }
    while(k){
        st.pop();
        k--;
    }
    while(st.empty()==false){
            ans=st.top()+ans;
            st.pop();
        }
        i=0;
        while(ans[i]=='0'){
            i++;
        }
        if(ans.length()==0 or ans.substr(i)==""){
            cout<<"Maximum string will be : 0";
            return 0;
        }
    cout<<"Maximum string will be : "<<ans.substr(i)<<endl;
    return 0;
}