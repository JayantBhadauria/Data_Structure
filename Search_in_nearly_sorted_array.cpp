#include<bits/stdc++.h>
using namespace std;
// int Element_Search(int *arr,int size,int k){
//     int i=0;
//     for(;i<size;i++){
//         if(arr[i]==k){
//             return i;
//         }
//     }
//     return -1;
// }

//*****OPTIMIZED*******

int Element_Search(int *arr,int size,int k){
    int start=0,end=size-1, mid=start+(end-start)/2,res=-1;
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]==k){
            return mid;
        }
        else if(arr[mid-1]==k){
            return mid-1;
        }
        else if(arr[mid+1]==k){
            return mid+1;
        }
        else if(arr[mid-1]>k){
            end=mid-2;
        }
        else{
            start=mid+2;
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
    if(Element_Search(arr,size,ele)>0){
    cout<<ele<<" is located at "<<Element_Search(arr,size,ele)<<"th position";
    }
    else{
        cout<<ele<<" is not present";
    }
    return 0;
}