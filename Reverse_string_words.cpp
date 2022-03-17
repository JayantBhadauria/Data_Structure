#include<bits/stdc++.h>
using namespace std;
void swaping(string& str,int start,int i){
        while(start<=i){
            swap(str[start],str[i]);
            start++;
            i--;
        }
}
void getSwap(string& str){
    int start=0;
    for(int i=0;i<str.length();i++){
        if(str[i]==' '){
            swaping(str,start,i-1);
            start=i+1;
        }
    }
    swaping(str,start,str.length()-1);
    swaping(str,0,str.length()-1);
}

int main(){
    string str;
    cout<<"String : ";
    getline(cin,str);
    getSwap(str);
    cout<<"Swaped String is : "<<str;
    return 0;
}