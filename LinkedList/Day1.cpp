//Insertion in START
#include <iostream>
using namespace std;
class  Node{
  public:
  int data;
  Node *next;
  Node(int n){
      this->data=n;
      this->next = NULL;
  }
};
int main()
{
    Node  *head;
    head = NULL;
    int arr[]={1,32,3,5,556,};
    for(int i=0;i<5;i++){
    if (head==NULL){
        head=new Node(arr[i]);
    }
    else {
        Node *temp;
        temp = new Node(arr[i]);
        temp->next=head;
        head=temp;
    }
   
    }
     Node *temp=head;
    while (temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}
