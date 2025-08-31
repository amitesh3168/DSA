//Creating Doubly Linked  List
///Array to Doubly Linked List
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
int main(){
    Node *head=NULL, *tail=NULL;
    int arr[]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        if (head==NULL){
            head=new Node(arr[i]);
            tail=head;
        }
        else{
            Node *temp=new Node(arr[i]);
            tail->next=temp;
            temp->prev=tail;
            tail=temp;
        }
    }///insertiom in particular postion
    int pos =2;
    if (pos==0){//for start
        if (head == NULL){
            head = new Node(99);
        }
        else {Node *temp = new Node(99);
        temp->next=head;
        head->prev=temp;
        temp =head;}
    }
    else {Node *curr=head;//for end 
    while(--pos){
        curr=curr->next;}
    if(curr->next==NULL){
        Node *temp=new Node(99);
        temp->prev=curr;
        curr->next=temp;
    }else{//main for middle
        Node *temp=new Node(99);
        temp->next=curr->next;
        temp->prev=curr;
        curr->next->prev=temp;//curr->next=temp
         curr->next=temp;//temp->next->prev=temp;
        
    } }

    Node *trav=head;
    while(trav){
        cout<<trav->data<<" ";
        trav=trav->next;
    }

}