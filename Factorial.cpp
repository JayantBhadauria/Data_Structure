#include<bits/stdc++.h>
using namespace std;
int getsize(int i,int ans[],int size){
    int carry=0,prod=0;
    for(int j=0;j<size;j++){
        prod=ans[j]*i+carry;
        ans[j]=prod%10;
        carry=prod/10;
    }
    while(carry){
        ans[size]=carry%10;
        carry/=10;
        size++;
    }
    return size;
}
int main(){
    int num,i=0,j=0,size=1;
    int ans[100000];
    ans[0]=1;
    cout<<"Enter the Number : ";
    cin>>num;
    cout<<"Factorial of "<<num<<" is : "; 
    for(i=2;i<=num;i++){
        size=getsize(i,ans,size);
    }
    for(i=size-1;i>=0;i--){
        cout<<ans[i];
    }
    return 0;
}