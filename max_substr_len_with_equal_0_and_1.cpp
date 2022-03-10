#include<bits/stdc++.h>
using namespace std;
// int MaxLength(string str){
//     int i=0,j=0,len=str.length(),ans=0;
//     unordered_map<char,int>mp;
//     while(i<len){
//         j=i;
//         while(j<len){
//             mp[str[j]]++;
//             if(mp['0']==mp['1']){
//                 ans=max(ans,j-i+1);
//             }
//             j++;
//         }
//         mp.clear();
//         i++;
//     }
//     return ans;
// }

//****OPTIMIZED***

int MaxLength(string str){
    unordered_map<int,int>mp;
    int i=0,j=0,len,ans=0,val=0;
    len=str.length();
    mp[0]=-1;
    while(i<len){
        if(str[i]=='0'){
        val-=1;
        }
        else if(str[i]=='1'){
        val+=1;
        }
        if(mp.find(val)!=mp.end()){
            j=mp.find(val)->second;
            ans=max(ans,i-j);
        }
        else{
        mp[val]=i;
        }
        i++;
    }
    
    return ans;
}

int main(){
    int i=0,j=0,len=0,ans=0;
    string str;
    cout<<"String : ";
    cin>>str;
    len=str.length();
    cout<<"Maximum subarray length is "<<MaxLength(str);
}