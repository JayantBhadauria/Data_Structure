#include<bits/stdc++.h>
using namespace std;
// bool isAnagram(string s1,string s2){
//     if(s1.length()!=s2.length()){
//         return false;
//     }
//     int c=0;
//     for(int i=0;i<s1.length();i++){
//         c=0;
//         for(int j=0;j<s2.length();j++){
//             if(s1[i]==s2[j]){
//                 c=1;
//                 break;
//             }
//         }
//         if(c==0){
//             return false;
//         }
//     }
//     return true;
// }

//****OPTIMIZED*****

bool isAnagram(string s1,string s2){
    if(s1.length()!=s2.length()){
        return false;
    }
    int count[256]={0};
    for(int i=0;i<s1.length();i++){
        count[s1[i]]++;
        count[s2[i]]--;
    }
    for(int i=0;i<256;i++){
        if(count[i]>0){
            return false;
        }
    }
    return true;
}

int main(){
    string s1,s2;
    cout<<"String 1 : ";
    cin>>s1;
    cout<<"String 2 : ";
    cin>>s2;
    (isAnagram(s1,s2))?cout<<"Strings are Anagram":cout<<"Strings are not anagram";
    return 0;
}