#include<bits/stdc++.h>
using namespace std;
int MaxOne(int arr[100][100],int row, int col){
    int count=0,maxCount=0,ans=-1;
	    for(int i=0;i<row;i++){
	        for(int j=0;j<col;j++){
	            if(arr[i][j]==1)
	            count++;
	        }
	        if(count>maxCount){
	            maxCount=count;
	            ans=i;
	        }
	        count=0;
	    }
	    return ans+1;
}

int main(){
    int arr[100][100],row=0,col=0;
    cout<<"Enter row : ";
    cin>>row;
    cout<<"Enter col : ";
    cin>>col;
    cout<<"Enter "<<row*col<<" numbers : \n";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Maximum number of 1's are in row : "<<MaxOne(arr,row,col);
    return 0;
}