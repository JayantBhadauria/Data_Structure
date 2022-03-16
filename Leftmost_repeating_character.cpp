#include<bits/stdc++.h>
using namespace std;
// char leftmost_repeating_char(string str){
//     int len=str.length(),i=0,j=0;
//     for(i=0;i<len-1;i++){
//         for(j=i+1;j<len;j++){
//             if(str[i]==str[j]){
//                 return str[i];
//             }
//         }
//     }
//     return '0';
// }

//****OPTIMIZED****

char leftmost_repeating_char(string str){
    int len=str.length(),i=0;
    char res='0';
    bool visited[256];
    fill(visited,visited+256,false);

    for(i=len-1;i>=0;i--){
        if(visited[str[i]]){
            res=str[i];
        }
        else{
            visited[str[i]]=true;
        }
    }
    return res;
}
int main(){
    string str;
    cout<<"String : ";
    cin>>str;
    cout<<"LeftMost repeating character is : "<<leftmost_repeating_char(str);
    return 0;
}