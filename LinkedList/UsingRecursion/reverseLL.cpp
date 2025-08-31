#include<iostream>
using namespace std;
//Function for Revering Linked List

// 1st METHOD
Node * reverse(Node *curr,Node *prev){
    if(curr==NULL){
        return prev;
    }
    Node *fut=curr->next;
    curr->next=prev;
    return reverse(fut,curr);
}
int main(){
    Node *head;
    head=reverse(head,NULL);
}

// 2nd Method
Node *curr =head;
Node *prev = NULL;
Node *fut = NULL;
while(curr){
    fut = curr->next;
    curr->next = prev;
    prev = curr;
    curr = fut;  
}
head = prev