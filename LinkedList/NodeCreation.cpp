#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;

    Node(int n){
        data = n;
        next = NULL;

    }
};
int main(){
    Node *Head;
    Head=new Node(5);
cout<<Head->data<<endl<<Head->next<<endl;
}
