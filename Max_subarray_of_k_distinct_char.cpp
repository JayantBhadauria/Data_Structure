#include<bits/stdc++.h>
using namespace std;
int Subsize(string str,int k){
    int len=str.length(),i=0,j=0,ans=INT_MIN;
    unordered_map<char,int>mp;
    while(i<len){
        mp[str[i]]++;
        if(mp.size()==k){
            ans=max(ans,i-j+1);
        }
        else if(mp.size()>k){
            while(mp.size()>k){
                mp[str[j]]--;
                if(mp[str[j]]==0){
                    mp.erase(str[j]);
                }
                j++;
            }
        }
        i++;
    }
    return ans;
}

int main(){
    string str;
    int k;
    cout<<"String : ";
    cin>>str;
    cout<<"k : ";
    cin>>k;
    cout<<"Subarray Size : "<<Subsize(str,k);
    return 0;
}