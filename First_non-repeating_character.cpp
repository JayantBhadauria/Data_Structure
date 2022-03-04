#include<bits/stdc++.h>
using namespace std;
char FNRC(string str){
     char res='0';
    if(str.length()==0){
        return '0';
    }
    else {
        int value[256];
        for(int i = 0; i<256; i++)
        value[i] = -1;
        for(int i=0;i<str.length();i++){
            if(value[str[i]]==-1){
                value[str[i]]=i;
            }
            else{
                value[str[i]]=-2;
            }
        }
       
        for(int i=0;i<str.length();i++){
            if(value[str[i]]>=0){
                res=str[i];
                break;
            }
        }
    }
     return res;
}

int main(){
    string str;
    cout<<"Enter string : ";
    cin>>str;
    cout<<"First non-repeating character is : "<<FNRC(str);
    return 0;
}