//inserting a Node at  particular Postion
//Creation of LL & Adding Node in START
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int n){
        data = n;
        next = NULL;
    }
};
Node* CreateLL(int arr[],int index,int size,Node* prev){
    if (index == size ){
        return prev;
    }
    Node* temp;
    temp= new Node(arr[index]);
    temp->next=prev;
    return CreateLL(arr,index+1,size,temp);
}
int main(){
    Node *head;
    head =  NULL;
    int arr[]={1,2,3,4,5,6,7,8};
    head = CreateLL(arr,0,8,head);
   //OPERATION
    int pos=3;
    int value =99;
    Node *temp=head;
    pos--;
    while(pos--){
        temp=temp->next;
    }
    Node *temp2 = new Node(value);
    temp2->next=temp->next;
    temp->next=temp2;

    
   // Node *temp;
    temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}