#include<bits/stdc++.h>
using namespace std;
void toh(int num,int from,int aux,int to){
    if(num==1){
        cout<<"Move "<<num<<" plate from rod "<<from<<" to rod "<<to<<endl;
        return;
    }
    toh(num-1,from,aux,to);
    cout<<"Move "<<num<<" plate from rod "<<from<<" to rod "<<aux<<endl;
    toh(num-1,aux,to,from);
    return;
}
int main(){
    int num;
    cout<<"How many number of plates : ";
    cin>>num;
    toh(num,0,1,2);
    return 0;
}
