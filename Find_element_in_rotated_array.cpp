#include<bits/stdc++.h>
using namespace std;
// int Element_Position(int *arr,int size,int ele){
//     int i=0;
//     for(;i<size;i++){
//         if(arr[i]==ele){
//             return i+1;
//         }
//     }
//     return -1;
// }

//*******OPTIMIZED*******

int Element_Position(int *arr,int size,int ele){
    int start=0,end=size-1,mid=start+(end-start)/2,i=0;
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]==ele){
            return mid;
        }
        if(arr[mid]>arr[start]){
            if(ele>=arr[start] and ele<=arr[mid])
                end=mid-1;
            else{
                start=mid+1;
            }
        }
        else{
            if(ele>=arr[mid] and ele<=arr[end]){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
    }
    return -1;
}

int main(){
    int size,ele;
    cout<<"Size : ";
    cin>>size;
    int arr[size];
    cout<<"Enter "<<size<<" rotated - sorted elements : \n";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter element to search : ";
    cin>>ele;
    cout<<ele<<"'s first located at "<<Element_Position(arr,size,ele)<<"th position\n";
    return 0;
}