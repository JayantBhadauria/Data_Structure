#include<bits/stdc++.h>
using namespace std;
int max_size(int *arr,int size,int k){
    int sum=0,i=0,j=0,res=0;
    while(i<size){
        sum+=arr[i];
        if(sum<k){
            i++;
        }
        else if(sum==k){
            res=max(res,i-j+1);
            i++;
        }
        else{
        while(sum>=k){
            sum-=arr[j];
            j++;
        }
        i++;
        }
    }
    return res;
}
int main(){
    int size,i=0,j=0,k;
    cout<<"Size : ";
    cin>>size;
    int arr[size];
    cout<<"Enter "<<size<<" elements :\n";
    for(i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter K : ";
    cin>>k;
    cout<<"Maximum size is "<<max_size(arr,size,k);
    return 0;
}