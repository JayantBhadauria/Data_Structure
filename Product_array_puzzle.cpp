#include<bits/stdc++.h>
using namespace std;
// vector<int> getProduct(vector<int>nums){
//         vector<int> ans;
//         int i=0,pro=1,len=nums.size();
//         int left[len],right[len];
//         left[0]=1,right[len-1]=1;
//         for(i=1;i<len;i++){
//             left[i]=left[i-1]*nums[i-1];
//         }
//         for(i=n-2;i>=0;i--){
//             right[i]=right[i+1]*nums[i+1];
//         }
//         for(i=0;i<len;i++){
//             ans.push_back(left[i]*right[i]);
//         }
//         return ans;
// }

//*****OPTIMIZED*****

vector<int> getProduct(vector<int>nums){
    int len=nums.size(),left[len],right[len],i=0,j=0;
    vector<int>ans;
    left[0]=1;
    right[len-1]=1;
    for(i=1;i<=len;i++){
        left[i]=left[i-1]*nums[i-1];
    }
    for(i=len-2;i>=0;i--){
        right[i]=right[i+1]*nums[i+1];
    }
    for(i=0;i<len;i++){
        ans.push_back(left[i]*right[i]);
    }
    return ans;
}

int main(){
    int i=0,j=0,size,a;
    vector<int>nums,ans;
    cout<<"Size : ";
    cin>>size;
    cout<<"Enter "<<size<<" numbers : \n";
    for(i=0;i<size;i++){
        cin>>a;
        nums.push_back(a);
    }
    ans=getProduct(nums);
    for(auto x:ans){
        cout<<x<<" ";
    }
    return 0;
}