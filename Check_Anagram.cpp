#include<bits/stdc++.h>
#define CHAR 256
using namespace std;

bool isAnagram(string str1,string str2){
    if(str1.length()!=str2.length()){
        return false;
    }
    else{
        int i=0,count[CHAR]={0};
        while(i<str1.length()){
            count[str1[i]]++;
            count[str2[i]]--;
            i++;
        }
        for(i=0;i<CHAR;i++){
            if(count[i]){
                return false;
            }
        }
    }
    return true;
}

int main(){
    string str1,str2;
    cout<<"Enter string : ";
    cin>>str1;
    cout<<"Enter text : ";
    cin>>str2;
    (isAnagram(str1,str2))?cout<<str1<<" and "<<str2<<" are anagrams ":cout<<str1<<" and "<<str2<<" are not anagrams ";
    return 0;
}