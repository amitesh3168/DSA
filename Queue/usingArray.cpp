#include<iostream> //Implementation using ARRAY
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
        return rear==size-1;
    }
    void push(int x){
        if (isempty()){
            front=rear=0;
            cout<<x<<" x is pushed in stack"<<endl;
            arr[0]=x;}
        if (isfull()){
            cout<<"Queue is full"<<endl;}
        else{rear=rear+1;
        arr[rear]=x;}}
    void pop(){
        if (isempty()){
            cout<<"Queue is empty"<<endl;}
        else{
            if (front==rear){
                front=rear=-1;
            }else { front = front + 1;
            cout<<arr[front]<<" is popped out from queue"<<endl; }    } }
};
int main(){
    Queue ram(5);
    ram.push(2);
    ram.push(3);
    ram.push(4);
    ram.pop();
}

