#include<bits/stdc++.h>
using namespace std;
// char first_nonRepeating_char(string str){
//     int i=0,len=str.length(),j=0,c=0;
//     for(i=0;i<len;i++){
//         c=0;
//         for(j=0;j<=len;j++){
//             if(str[i]==str[j] and i!=j){
//                 c=1;
//                 break;
//             }
//         }
//         if(c==0){
//             return str[i];
//         }
//     }
//     return '0';
// }

//****OPTIMIZED*****

char first_nonRepeating_char(string str){
    int count[256],i=0,j=0,len=str.length(),res=INT_MAX;
    fill(count,count+256,-1);
    for(i=0;i<len;i++){
        if(count[str[i]]==-1){
            count[str[i]]=i;
        }
        else{
            count[str[i]]=-2;
        }
    }
    for(i=0;i<256;i++){
        if(count[i]>=0){
            res=min(res,count[i]);
        }
    }
    if(res>=0){
        return str[res];
    }
    return '0';

}

int main(){
    string str;
    cout<<"String : ";
    cin>>str;
    cout<<"First non-repeating character is : "<<first_nonRepeating_char(str);
    return 0;
}