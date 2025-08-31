#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    Node *next;
    Node *prev;
    Node (int n){
        data=n;
        next=NULL;
        prev=NULL;
    }
};
Node* createdoubly(int arr[], int index, int size, Node *back){
    if (index==size) return NULL;
    Node *temp=new Node(arr[index]);
    temp->prev=back;
    temp->next=createdoubly(arr,index+1,size,temp);
    return temp;

}
int main(){
    Node *head=NULL;
    int arr[]={1,2,3,4,5};
    head=createdoubly(arr,0,5,NULL);
    int pos = 2;
    if (pos==1){
        Node *temp=head;
        head=head->next;
        delete temp;
        if (head){
            head->prev=NULL;
        }}
        else {
            Node *curr=head;
            while(--pos){
                curr=curr->next;
            }
            if(curr->next==NULL){
                curr->prev->next=NULL;
                delete curr;
            }
            else{
               curr->prev->next=curr->next;
                 curr->next->prev=curr->prev;
                delete curr;

            }
        }

    
    Node* trav=head;
    while(trav){
        cout<<trav->data<<" ";
        trav=trav->next;
    }}
