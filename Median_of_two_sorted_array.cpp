#include<bits/stdc++.h>
using namespace std;
int FindMedian(int *arr1,int size1,int *arr2,int size2){
    int low=0,high=size1-1,cut1,cut2;
    
    while(low<=high){
    cut1=(low+high)/2;
    cut2=(size1+size2+1)/2-cut1;

    int left1=cut1==0? INT_MIN : arr1[cut1-1];
    int left2=cut2==0? INT_MIN : arr2[cut2-1];
    int right1=cut1==size1?INT_MAX : arr1[cut1];
    int right2=cut2==size2?INT_MAX : arr2[cut2];

    if(left1<=right2 and left2<=right1){
        if((size1+size2)/2==0){
            return (max(left1,left2)+min(right1,right2))/2;
        }
        else{
            return max(left1,left2);
        }
    }
    else if(left1>right2){
        high=cut1-1;
    }
    else{
        low=cut1+1;
    }
    }
    return 0;
}
int main(){
    int size1,size2;
    cout<<"Size1: ";
    cin>>size1;
    cout<<"Size2: ";
    cin>>size2;
    int arr1[size1],arr2[size2];
    cout<<"Enter "<<size1<<" element : \n";
    for(int i=0;i<size1;i++){
        cin>>arr1[i];
    }
    cout<<"Enter "<<size2<<" element : \n";
    for(int i=0;i<size2;i++){
        cin>>arr2[i];
    }
    cout<<"Median is : "<<FindMedian(arr1,size1,arr2,size2);
    return 0;
}