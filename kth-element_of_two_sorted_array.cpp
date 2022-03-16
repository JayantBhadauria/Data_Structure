#include<bits/stdc++.h>
using namespace std;
int getElement(int *arr1,int size1,int *arr2,int size2,int pos){
    int i=0,j=0,k=0;
    while(i<size1 and j<size2){
        if(arr1[i]>=arr2[j]){
            k++;
            if(k==pos){
            return arr2[j];
            }
            j++;
        }
        else{ k++;
             if(k==pos){
            return arr1[i];
            }
            i++;
        }
    }
    while(i<size1){
            k++;
             if(k==pos){
            return arr1[i];
            }
        i++;
    }
    while(j<size2){
         k++;
             if(k==pos){
            return arr2[j];
            }
        j++;
    }
    return -1;
}

int main(){
    int size1,size2,i=0,pos=0;
    cout<<"Size1 : ";
    cin>>size1;
    cout<<"Size2 : ";
    cin>>size2;
    int arr1[size1],arr2[size2];
    cout<<"Enter "<<size1<<" elements for Array 1 : \n";
    for(i=0;i<size1;i++){
        cin>>arr1[i];
    }
    cout<<"Enter "<<size2<<" elements for Array 2 : \n";
    for(i=0;i<size2;i++){
        cin>>arr2[i];
    }
    cout<<"Enter the position : ";
    cin>>pos;
    cout<<"Element will be : "<<getElement(arr1,size1,arr2,size2,pos);
    return 0;
}