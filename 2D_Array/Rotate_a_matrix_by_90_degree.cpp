#include<bits/stdc++.h>
using namespace std;
void RotateMatrix(int arr[][100],int row,int col){
    int i=0,j=0,s=row;
    for(i=0;i<s;i++){
        for(j=i;j<s;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    for(i=0;i<s;i++){
        for(j=0;j<s/2;j++){
            swap(arr[i][j],arr[i][s-j-1]);
        }
    }
    for(i=0;i<s;i++){
        for(j=0;j<s;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
return;
}

int main(){
    int arr[100][100],i=0,j=0,row,col;
    cout<<"Enter row : ";
    cin>>row;
    cout<<"Enter columns : ";
    cin>>col;
    cout<<"Enter "<<row*col<<" elements : \n";
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Rotation : ";
    RotateMatrix(arr,row,col);
    return 1;
}