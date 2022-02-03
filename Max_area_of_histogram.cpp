#include<bits/stdc++.h>
using namespace std;
int areaofhistogram(vector<int>v){
    int n=v.size(),ans=0;
    vector<int>nse(n,n-1);
    stack<int>s;
    for(int i=n-1;i>=0;i--){
        while(!s.empty() and v[s.top()]>=v[i]){
            s.pop();
        }
        if(s.empty()==false){
            nse[i]=s.top()-1;
        }
        s.push(i);
    }
    s={};
    vector<int>pse(n,0);
    for(int i=0;i<n;i++){
        while(!s.empty() and pse[s.top()]>v[i]){
            s.pop();
        }
        if(s.empty()==false){
            pse[i]=s.top()+1;
        }
        s.push(i);
    }
    for(int i=0;i<n;i++){
        ans=max(ans,(nse[i]-pse[i]+1)*v[i]);
    }
    return ans;
}

int main(){
vector<int>v;
v={2,1,5,6,2,3};
int ans=areaofhistogram(v);
cout<<ans<<" ";
}