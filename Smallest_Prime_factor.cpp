#include<bits/stdc++.h>
using namespace std;
void SPF(int num){
    int arr[num]={0};
    for(int i=2;i<=num;i++){
        arr[i]=i;
    }
    for(int i=2;i<=num;i++){
        if(arr[i]==i){
            for(int j=i*i;j<=num;j+=i){
                if(arr[j]==j){
                    arr[j]=i;
                }
            }
        }
    }
    while(num!=1){
        cout<<arr[num]<<" ";
        num/=arr[num];
    }
    return;
}
int main(){
    int num;
    cout<<"Enter Number : ";
    cin>>num;
    SPF(num);
    return 0;
}