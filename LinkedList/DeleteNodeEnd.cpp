//Deleting A Node in END
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int n){
        data=n;
        next=NULL;
    }
};
Node* CreateLL(int arr[],int index, int size){
    if (index==size){
        return NULL;
    }
    Node* temp;
    temp = new Node(arr[index]);
    temp->next=CreateLL(arr,index+1,size);
    return temp;
}
int main(){
    Node* Head;
    Head = NULL;
    int  arr[]={1,2,3,3,4,5,};
    Head=CreateLL(arr,0,6);
    if (Head!=NULL){
    if(Head->next==NULL){
        Node *temp = Head;
        Head = NULL;
        delete temp;
        }
    else {
        Node *curr =Head;
        Node *temp = NULL;
        while(curr->next!=NULL){
            temp =curr;
            curr=curr->next;
            
        }
        delete curr;
        temp->next=NULL;
    }    
    }
    while(Head){
        cout<<Head->data<<" ";
        Head=Head->next;
    }
}