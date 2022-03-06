#include<bits/stdc++.h>
using namespace std;

vector<int>maxSubarr(int *arr,int size,int k){
    vector<int> ans;
    list<int> l;
    int i=0,j=0;
    while(i<size){
        while(!l.empty() and l.front()<arr[i]){
            l.pop_back();
        }
        l.push_back(arr[i]);

        if(i-j+1<k){
            i++;
        }
        else{
            ans.push_back(l.front());
            if(l.front()==arr[j]){
                l.pop_front();
            }
            j++;
            i++;
        }
    }
    return ans;
}

int main(){
    int size,k,i=0,j=0;
    cout<<"Array Size : ";
    cin>>size;
    int arr[size];
    cout<<"Enter "<<size<<" elements for array : \n";
    for(i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter subarray size : ";
    cin>>k;
    vector<int>ans=maxSubarr(arr,size,k);
    for(auto x:ans){
        cout<<x<<" ";
    }
    return 0;
}