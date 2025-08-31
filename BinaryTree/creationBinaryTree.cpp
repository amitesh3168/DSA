#include<iostream>
#include<queue>
using namespace std;
class Node {
    public:
    int data;
    Node* left;
    Node* right;
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
int main(){
    int first, second;
    int x;
    cout<<"Enter value of first Node: ";
    cin>>x;
    queue<Node*> q;   
    Node* root = new Node(x);
    q.push(root);
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        cout<<"Enter value of left node of "<<temp->data<<": ";
        cin>>first;
        if(first!=-1){
        temp->left=new Node(first);
        q.push(temp->left);
        }

        cout<<"Enter value of right node of "<<temp->data<<": ";
        cin >> second;
        if(second!=-1){
        temp->right=new Node(second);
        q.push(temp->right);
        }

    }
    
}