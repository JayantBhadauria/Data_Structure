#include<bits/stdc++.h>
using namespace std;

void push_element(stack<int>&s,int tem){
    if(s.empty() or s.top()>tem){
        s.push(tem);
        return;
    }
    int k=s.top();
    s.pop();
    push_element(s,tem);
    s.push(k); 
}

void sortStack(stack<int>&s){
    if(s.empty()){
        return;
    }
    int tem=s.top();
    s.pop();
    sortStack(s);
    push_element(s,tem);
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
cout<<"Sorted Stack : ";
sortStack(s);
while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();
}
return 0;
}