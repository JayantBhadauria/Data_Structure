#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
int main(){
    int size,value;
    cout<<"Size of Linked list : ";
    cin>>size;
    cout<<"Insret "<<size<<" elements : \n";
    cin>>value;
    Node * Nnode=new Node(value);
    Node* head=Nnode;
    for(int i=0;i<size-1;i++){
        cin>>value;
        Nnode->next=new Node(value);
        Nnode=Nnode->next;

    }
    cout<<"Your Linked List is : \n";
    Node * tem=head;
    while(tem->next){
        cout<<tem->data<<"->";
        tem=tem->next;
    }
    cout<<tem->data;
    return 0;
}