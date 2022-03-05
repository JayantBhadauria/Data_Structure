#include<bits/stdc++.h>
using namespace std;
int countAnagram(string str,string text){
    int len1=str.length(),len2=text.length(),i=0,j=0,count=0;
    vector<int>textArray(256),strArray(256);
    for(i=0;i<len2;i++){
        textArray[text[i]]++;
        strArray[str[i]]++;
    }
    if(textArray==strArray){
        count++;
    }
    for(;i<len1;i++){
        strArray[str[i]]++;
        strArray[str[j]]--;
        if(textArray==strArray){
            count++;
        }
        j++;
    }
    return count;
}
int main(){
    string str,text;
    cout<<"String : ";
    cin>>str;
    cout<<"Pattern : ";
    cin>>text;
    cout<<"Number of Anagrams is "<<countAnagram(str,text);
    return 0;
}