#include<bits/stdc++.h>
using namespace std;
// vector<int>searchElement(int row,int col,int ele,int **arr){
//     vector<int>ans;
//     int i=0,j=0;
//     while(i<row){
//         j=0;
//         while(j<col){
//             if(arr[i][j]==ele){
//                 ans.push_back(i),
//                 ans.push_back(j);
//                 return ans;
//             }
//             j++;
//         }
//         i++;
//     }
//     ans.push_back(0);
//     return ans;
// }

//****OPTIMIZED****

vector<int>searchElement(int row,int col,int ele,int **arr){
    vector<int>ans;
    int i=col-1,j=0;
    while(i>=0 and j<row){
        if(arr[i][j]==ele){
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
        else if (arr[i][j]>ele){
            i--;
        }
        else{
            j++;
        }
    }
     ans.push_back(0);
     return ans;
}

int main(){
    int row,col,i=0,j=0,ele;
    cout<<"Enter Row size : ";
    cin>>row;
    cout<<"Enter column size : ";
    cin>>col;
    int **arr;
    arr = new int *[col];
    cout<<"Enter "<<row*col<<" elements :\n";
    for(;i<row;i++){
        arr[i]=new int[row];
        for(j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Enter element that you wanna search : ";
    cin>>ele;
    vector<int>ans=searchElement(row,col,ele,arr);
    if(ans.size()>=2){
        cout<<"Element found at ("<<ans[0] <<","<<ans[1]<<") index.";
    }
    else{
        cout<<"Sorry element didn't found";
    }
    return 0;
}