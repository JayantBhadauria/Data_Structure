#include<bits/stdc++.h>
using namespace std;
// int Ceil_Element_Search(int *arr,int size,int k){
//     int i=0,res=-1;
//     for(;i<size;i++){
//         if(arr[i]>k){
//             res=i;
//         }
//     }
//     return res;
// }

//*****OPTIMIZED*****

int Ceil_Element_Search(int *arr,int size,int k){
    int left=0,right=size-1,mid=left+(right-left)/2,res=-1;
    while(left<=right){
        mid=left+(right-left)/2;
        if(arr[mid]==k){
            return mid;
        }
        else if(arr[mid]>k){
            right=mid-1;
            res=mid;
        }
        else if(arr[mid]<k){ 
            left=mid+1;
        }
    }
    return res;
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
    if(Ceil_Element_Search(arr,size,ele)>0){
    cout<<ele<<" is located at "<<Ceil_Element_Search(arr,size,ele)<<"th position";
    }
    else{
        cout<<ele<<" is not present";
    }
    return 0;
}