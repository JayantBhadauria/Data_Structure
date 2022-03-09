#include<bits/stdc++.h>
using namespace std;
int LWR(string str){
int n=str.length(),i=0,j=0,k=0;
unordered_map<char,int>mp;
while(i<n){
    mp[str[i]]++;
    if(mp.size()==(i-j+1)){
        k=max(k,i-j+1);
    }
    else if (mp.size()<i-j+1){
        while(mp.size()<(i-j+1)){
            mp[str[j]]--;
            if(mp[str[j]]==0){
                mp.erase(str[j]);
            }
            j++;
        }
    }
    i++;
}
return k;
}

int main(){
    string str;
    cout<<"String : ";
    cin>>str;
    cout<<"Length of Longest substring without repeating character is : "<<LWR(str);
    return  0;
}