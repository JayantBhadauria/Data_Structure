#include<bits/stdc++.h>
using namespace std;
void push(queue<int>&queue,int val){
    int i=0;
    queue.push(val);
    int len=queue.size()-1;
    while(i<len){
        queue.push(queue.front());
        queue.pop();
        i++;
    }
}
int top(queue<int>&queue){
    return queue.front();
}
int main(){
    queue<int>queue;
    push(queue,1);
    push(queue,2);
    push(queue,3);
    push(queue,4);
    push(queue,5);
    queue.pop();
    queue.pop();
    cout<<"Top Element is : "<<(queue.front());
    return 0;
}