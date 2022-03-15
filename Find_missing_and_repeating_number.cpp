#include<bits/stdc++.h>
using namespace std;
// void getMissig_Repeating(int *arr,int size){
//     int count[size];
//     for(int i=1;i<=size;i++){
//         count[i]=0;
//     }
//     for(int i=0;i<size;i++){
//         if(count[arr[i]]==0){
//             count[arr[i]]=1;
//         }
//         else if(count[arr[i]]==1){
//             cout<<"Repeating number : "<<arr[i]<<endl;
//         }
//     }
//     for(int i=1;i<=size;i++){
//         if(count[i]==0){
//             cout<<"Missing number : "<<i<<endl;
//         }
//     }
// }

//****OPTIMIZED****

void getMissig_Repeating(int *arr,int size){
    int val=0,x=0,y=0;
    for(int i=1;i<=size;i++){
        val=arr[i]^i;
    }
    int left_set=val& ~(val-1);
    for(int i=0;i<size;i++){
        if(arr[i]& left_set){
            x^=arr[i];
        }
        else{
            y^=arr[i];
        }
    }
    for(int i=1;i<=size;i++){
        if(i& left_set){
            x^=i;
        }
        else{
            y^=i;
        }
    }
    cout<<"Repeating element : "<<x<<endl;
    cout<<"Missing element : "<<y<<endl;
    return;
}

int main(){
    int size;
    cout<<"Size : ";
    cin>>size;
    int arr[size];
    cout<<"Enter "<<size<<" numbers from 0 to "<<size-1<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    getMissig_Repeating(arr,size);
    return 0;
}