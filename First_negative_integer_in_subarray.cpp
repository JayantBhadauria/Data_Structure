#include<bits/stdc++.h>
using namespace std;
vector<int>FN(int arr[],int size,int k){
    int i=0,j=0;
    vector<int>ans;
    list<int>l;
    while(j<size){
        if(arr[j]<0){
            l.push_back(arr[j]);
        }
        if(j-i+1<k){
            j++;
        }
        else{
            if(l.empty()){
                ans.push_back(0);
            }
            else{
                ans.push_back(l.front());
                if(l.front()==arr[i]){
                    l.pop_front();
                }
            }
            i++;
            j++;
        }
    }
    return ans;
}
int main(){
    int size,k;
    cout<<"Enter array size : ";
    cin>>size;
    int arr[size];
    cout<<"Enter "<<size<<" elements :\n";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter subarray size : ";
    cin>>k;
    vector<int>ans=FN(arr,size,k);
    for(auto x:ans){
        cout<<x<<" ";
    }
    return 0;
}