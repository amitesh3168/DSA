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
        prev=NULL;}
};
int main()
{
    Node *head;
     Node  *curr=head;
    while(curr!=NULL){
        curr=curr->next;}
    Node *temp=new Node(9);
    curr->next=temp;
    temp->prev=curr;

    Node *trav=head;
    while(trav){
        cout<<trav->data<<" ";
        trav=trav->next;
    }
}