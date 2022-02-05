#include<bits/stdc++.h>
using namespace std;
void push(stack<int>&s,int val){
stack<int>s1;
while(!s.empty()){
    s1.push(s.top());
    s.pop();
}
s.push(val);
while(!s1.empty()){
    s.push(s1.top());
    s1.pop();
}
}
int front(stack<int>&s){
    return s.top();
}
void pop(stack<int>&s){
    s.pop();
}

int main(){
    stack<int>s;
    push(s,1);
    push(s,2);
    push(s,3);
    push(s,4);
    push(s,5);
    cout<<"front element of queue before pop() is : "<<front(s) <<endl;
    pop(s);
    cout<<"front element of queue after pop() is : "<<front(s);
}