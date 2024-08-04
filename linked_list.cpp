#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next=NULL;
    Node(int data){
        this->data=data;
        this->next=next;
    }
};
void insertAtHead(Node* &head,int d){
    Node *temp=new Node(d);
    temp->next=node1;
    head=temp;
}
void print(Node* &head){
    
    while(temp->next==NULL){
        temp=temp->next;
        cout<<temp->data<<endl;
    }
    cout<<endl;
}
int main() {
    // Your code here;
    Node *node1=new Node(10);
    Node* head=node1;
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;
    insertAtHead(20);
    print(head);
    
    // cout<<"Linked";

    return 0;
}