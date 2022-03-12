#include<bits/stdc++.h>
using namespace std;
// int First_Position(int *arr,int size,int ele){
//     int i=0;
//     for(i=0;i<size;i++){
//         if(arr[i]==ele){
//             return i+1;
//         }
//     }
//     return 0;
// }
// int Last_Position(int *arr,int size,int ele){
//     int i=size-1;
//     for(;i>=0;i--){
//         if(arr[i]==ele){
//             return i+1;
//         }
//     }
//     return 0;
// }

//*****OPTIMIZED*****

int First_Position(int *arr,int size,int ele){
int start=0,end=size-1,i=0,mid=(start+end)/2,res=-1;
while(start<=end){
    mid=(start+end)/2;
    if(arr[mid]==ele){
        res=mid;
        end=mid-1;
    }
    if(arr[mid]>ele){
        end=mid-1;
    }
    if(arr[mid]<ele){
        start=mid+1;
    }
}
return res+1;
}

int Last_Position(int *arr,int size,int ele){
int start=0,end=size-1,i=0,mid=(start+end)/2,res=-1;
while(start<=end){
    mid=(start+end)/2;
    if(arr[mid]==ele){
        res=mid;
        start=mid+1;
    }
    if(arr[mid]>ele){
        end=mid-1;
    }
    if(arr[mid]<ele){
        start=mid+1;
    }
}
return res+1;
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
    cout<<ele<<"'s first located at "<<First_Position(arr,size,ele)<<"th position\n";
    cout<<ele<<"'s last located at "<<Last_Position(arr,size,ele)<<"th position\n";
    return 0;
}