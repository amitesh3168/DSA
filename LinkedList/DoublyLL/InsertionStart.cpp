#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int n){
        data = n;
        next=NULL;
prev=NULL;
    }
};
int main()
{
    Node *head=NULL;

if (head==NULL){
    head=new Node(10);
}else {
    Node  *temp=new Node(5);
    temp->next=head;
    head->prev=temp;
    temp=head;
    
}
    Node *trav=head;
    while(trav){
        cout<<trav->data<<" ";
        trav=trav->next;
    }
}