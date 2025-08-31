#include<iostream> //Implementation Circular Queue with ARRAY
using namespace std;
class Queue{
    int *arr;
    int front, rear;
    int size;
    public:
    Queue(int n){
        arr=new int[n];
        size=n;
        front=-1, rear=-1;
    }
    bool isempty(){
        return (front==-1);
    }
    bool isfull(){
        return (rear+1)%size==front;
    }
    void push(int x){
        if (isfull()){
            cout<<"Queue is full"<<endl;
            return;}
         if (isempty()){
            front=rear=0;
         }
        else{rear=(rear+1)%size;
        }arr[rear]=x;
        cout<<x<<"  is pushed in queue :"<<endl;}
    void pop(){
        if (isempty()){
            cout<<"Circular Queue is empty"<<endl;}
        else{
            if (front==rear){
                front=rear=-1;
            }else {cout<<arr[front]<<" is popped out from queue"<<endl; 
             front = (front + 1)%size;}    } }
};
int main(){
    Queue ram(2);
    ram.push(2);
    ram.push(3);
    ram.push(4);
    ram.pop();
}

