// Implementing stack using Linked LIst
//Operation -> PUSH, POP, PEEK, IsEMPTY, IsSIZE
#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    Node* next;
    Node(int value){
        data=value, next=NULL;}};
class Stack{
    Node *top;
    int size;
    public:
    Stack(){top=NULL, size=0; }
    // Push
    void push(int value){Node *temp= new Node(value);
        if (temp==NULL){cout<<"stack overflow"<<endl;
            return;}
       else{ 
        temp->next=top, top=temp, size++;
        cout<<"Pushed "<<value<< " into stack"<<endl;}}     
    void pop(){
        if(top==NULL){cout<<"Stack underflow"<<endl;
             return;
        }
     else{   
        Node *temp=top;
        top=top->next;
        delete temp;
        size--;
    }} int peek(){
        if (top==NULL){cout<<"Stack is empty"<<endl;
            return -1;
        }
        else{return top->data;}}
    bool isempty(){
        return top==NULL;
    }
    int isSize(){ return size;}
};
int main(){
    Stack A;
    A.push(1), A.push(2), A.push(3), A.push(4);
    A.pop();
    cout<< A.isSize()<<endl;
}