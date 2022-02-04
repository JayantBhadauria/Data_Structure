#include<bits/stdc++.h>
using namespace std;

void push_ele(stack<int>&s,int tem){
    if(s.empty()){
        s.push(tem);
        return;
    }
    int k=s.top();
    s.pop();
    push_ele(s,tem);
    s.push(k); 
}

void reverseStack(stack<int>&s){
    if(s.empty()){
        return;
    }
    int tem=s.top();
    s.pop();
    reverseStack(s);
    push_ele(s,tem);
}

int main(){
stack<int>s;
int size,ele;
cout<<"Size: ";
cin>>size;
for(int i=0;i<size;i++){
    cin>>ele;
    s.push(ele);
}
cout<<"Reverse Stack : ";

reverseStack(s);
while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();
}
return 0;
}