#include<bits/stdc++.h>
using namespace std;
// int SubarrayCount(int *arr,int size){
//     int i=0,j=0,sum=0,count=0;
//     for(;i<size;i++){
//         sum=0;
//         for(j=i;j<size;j++){
//             sum+=arr[j];
//             if(sum==0){
//                 count++;
//             }
//         }
//     }
//     return count;
// }

//****OPTIMIZED****

int SubarrayCount(int *arr,int size){
    int sum=0,i=0,count=0;
    unordered_map<int,int>mp;
    mp[0]=1;
    for(;i<size;i++){
        sum+=arr[i];
        if(mp.find(sum)!=mp.end()){
        count+=mp[sum];
        }
        mp[sum]++;
    }
    return count;
}

int main(){
    int size,i=0,j=0;
    cout<<"Size : ";
    cin>>size;
    cout<<"Enter "<<size<<" element : \n";
    int arr[size];
    for(;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Subarray count : "<<SubarrayCount(arr,size);
    return 0;
}