#include<bits/stdc++.h>
using namespace std;
// int Bitonic_element(int *arr,int size){
//     int i=0;
//     for(;i<size-1;i++){
//         if(arr[i]>arr[i+1]){
//             return arr[i];
//         }
//     }
//     return 0;
// }

//******OPTIMIZED******

int Bitonic_element(int *arr,int size){
    int left=0,right=size-1,mid=left+(right-left)/2;
    while(left<=right){
        mid=left+(right-left)/2;
        if(arr[mid]>=arr[mid-1] and arr[mid]>=arr[mid+1]){
            return arr[mid];
        }
        else if(mid-1>=0 and arr[mid]<=arr[mid-1]){
            right=mid-1;
        }
        else if(mid+1<=size and  arr[mid+1]>=arr[mid]){
            left=mid+1;
        }
    }
    return arr[mid];
}

int main(){
    int size,i=0;
    cout<<"Size : ";
    cin>>size;
    cout<<"Enter "<<size<<" elements :\n";
    int arr[size];
    for(i=0;i<size;i++){
        cin>>arr[i];
    }
    int ans=Bitonic_element(arr,size);
    cout<<ans;
    return 0;
}