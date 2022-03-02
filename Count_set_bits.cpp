#include<bits/stdc++.h>
using namespace std;
//Kernighan’s Algorithm is the best algorthm to count number of set bits.
//It works in O(logn) time complexity.
int SetBits(int num){
    int count=0,right_setbit=0;
    while(num>0){
        right_setbit=num & -num;
        count++;
        num-=right_setbit;
    }
    return count;
}

int main(){
    int num;
    cout<<"Enter a Number : ";
    cin>>num;
    cout<<"Number of Set bits = "<<SetBits(num);
}