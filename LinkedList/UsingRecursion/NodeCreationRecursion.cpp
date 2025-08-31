// Node Creation Using RECURSION
//Adding Node in the END
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
    Node* temp;
    temp=Head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}