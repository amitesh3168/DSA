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
    if (head!=NULL){
        if (head->next==NULL){
            delete head;
            head = NULL;
        }else {
            Node *curr=head;
            while(curr->next!=NULL){
                curr=curr->next;
            }
            curr->prev->next=NULL;
            delete curr;
        }
    }
    Node* trav=head;
    while(trav){
        cout<<trav->data<<" ";
        trav=trav->next;
    }
}