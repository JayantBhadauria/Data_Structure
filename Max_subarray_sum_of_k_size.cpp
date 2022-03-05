#include<bits/stdc++.h>
using namespace std;
int MaxSum(int arr[],int size,int k){
    int j=0,sum=0,i=0,res=INT_MIN;
    while(j<size){
        sum+=arr[j];
        if(j-i+1<k){
            j++;
        }
        else{
            res=max(res,sum);
            sum-=arr[i];
            i++;
            j++;
        }
    }
    return res;
}

int main(){
    int size,k;
    cout<<"Size : ";
    cin>>size;
    int arr[size];
    cout<<"Enter "<<size<<" elements :\n";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter subarray size : ";
    cin>>k;
    cout<<"Maximum sum is : "<<MaxSum(arr,size,k);
    return 0;
}