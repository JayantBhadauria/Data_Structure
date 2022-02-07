#include<bits/stdc++.h>
using namespace std;
void permutation(string s,int left,int right){
    if(left==right){
        cout<<s<<endl;
        return;
    }
    for(int i=left;i<=right;i++){
        swap(s[left],s[i]);
        permutation(s,left+1,right);
        swap(s[left],s[i]);
    }
    return;
}
int main(){
    string s;
    cout<<"String : ";
    cin>>s;
    int left=0,right=s.length()-1;
    cout<<"Permutations are : \n";
    permutation(s,left,right);
}