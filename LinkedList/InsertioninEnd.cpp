//Insertion in END
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
int main(){
    Node* head=NULL;
    Node* tail=NULL;
    int arr[]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        if (head==NULL){
            head=new Node(arr[i]);
            tail=head;  }
        else{
            tail->next=new Node(arr[i]);
            tail=tail->next;
        }
    }
    Node* temp;
    temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}