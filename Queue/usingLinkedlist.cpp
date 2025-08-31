#include<iostream> //Implementation using Linked List;
using namespace std;
class Node {
    public:
    int data;
    Node* next;
    Node (int x){
        data=x;
        next=NULL;}};
class Queue{
    Node *front,*rear;
    public:
    Queue(){ front = rear =NULL; }
    bool isempty(){return front==NULL;}
  int start(){
    if (isempty()){cout<<"queue is empty"<<endl;
    }else return front->data;
  } void push(int x){
    if (isempty()){front = new Node(x);
        rear=front;
        cout<<x<<" is pushed in queue"<<endl;
        return;
    }else {
        rear->next=new Node(x);
        cout<<x<<" is pushed in queue"<<endl;
        rear=rear->next;  }}
    void pop(){
        if (isempty()){
            cout<<"queue is empty"<<endl;
        return;}
    else{cout<<front->data<<" popped out from queue"<<endl;
    Node *temp=front;
    front=front->next;
    delete temp;}}
};
int main(){
    Queue ram;
    ram.push(2);
    ram.push(3);
    ram.push(4);
    ram.pop();
}
