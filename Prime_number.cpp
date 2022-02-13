#include<bits/stdc++.h>
using namespace std;
void Prime_range(int num){
    int arr[num+1]={0};
    for(int i=2;i<=num;i++){
        if(arr[i]==0){
            for(int j=i*i;j<=num;j+=i){
                arr[j]=1;
            }
        }
    }
    for(int i=2;i<=num;i++){
        if(arr[i]==0)
        cout<<i<<" ";
    }
    return;
}
int main(){
    int num;
    cout<<"Enter Number : ";
    cin>>num;
    Prime_range(num);
    return 0;
}