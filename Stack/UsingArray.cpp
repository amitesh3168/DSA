// Implementing stack using Array,Operation -> PUSH, POP, PEEK, IsEMPTY, IsSIZE
#include<iostream>
using namespace std;
class Stack{
    int *arr, size, top;
    public:
    bool flag;//checking elements is emppty or not 1 show it is empty
    Stack(int s){ //Constructor
    size = s;
    top  = -1;
     arr  = new int[s];
    flag = 1; }
     void push(int value){//Push
        if (top == size-1){
            cout<<"Stack Overflow"<<endl;
            return; } else {
            top++,arr[top]=value;
             cout<<value<<" pushed in Stack"<<endl;
            flag=0;
            } };
   void pop(){if (top==-1){//POP
            cout<<"stack Underflow"<<endl;
            return;}
        else { cout<<arr[top]<<" Popped out from stack"<<endl;
                top--;
                if (top==-1){
                flag=1;}}}
    int peek(){ //PEEK
        if (top==-1){
            cout<<"Stack is empty"<<endl;
            return -1; }
        else {
            return arr[top];} }
    bool isEmpty(){  return top==-1;}
    int issize(){  return top+1;}};/// Asking SIZE
int main(){
    Stack A(5);
    A.push(4),A.push(9),A.push(2), A.push(9);
    A.pop(),A.pop();
}