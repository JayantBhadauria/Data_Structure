#include<bits/stdc++.h>
using namespace std;
int Binary_Search(int *arr,int size,int k){
    int start=0,end=size-1,mid=start+(end-start)/2;
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]==k){
            return mid+1;
        }
        if(arr[mid]>k){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return -1;
}
int main(){
    int size,ele;
    cout<<"Size : ";
    cin>>size;
    int arr[size];
    cout<<"Enter "<<size<<" sorted elements : \n";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter element to search : ";
    cin>>ele;
    if(Binary_Search(arr,size,ele)>0){
    cout<<ele<<" is located at "<<Binary_Search(arr,size,ele)<<"th position";
    }
    else{
        cout<<ele<<" is not present";
    }
    return 0;
}