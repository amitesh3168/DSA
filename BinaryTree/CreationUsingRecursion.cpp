#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int x){
        data=x;
        left = right = NULL;
    }
};
// TRAVERSING
//NLR preorder
void preorder(Node* root){
    if (root==NULL){
        return;
    }
    cout<<root->data<<" ";        //N
    preorder(root->left);   //L
    preorder(root->right); //R
}
//LNR Inorder
void inorder(Node* root){
    if (root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data;
    inorder(root->right);
}
//LRN
void postorder(Node *root){
    if (root==NULL){
        return ;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

Node* Binarytree(){
    int x;
    cin>>x;
    if (x==-1){
        return NULL; }
        
    Node* temp = new Node(x);
    cout<<"Enter the  left node value of "<<temp->data<<": ";
    temp->left = Binarytree();
    cout<<"Enter the  right node value of "<<temp->data<<": ";
    temp->right= Binarytree();
    return temp;
}
int main(){
    cout<<"Enter the root Node: ";
    Node *root;
    root = Binarytree();
   cout<<"Preorder traversal (NLR) value are: ";
   preorder(root);
   cout<<endl;
   cout<<"Inorder traversal (LNR) value are: ";
   inorder(root);
   cout<<endl;
   cout<<"Postorder traversal (LRN) value are: ";
   postorder(root);
   cout<<endl;
    
    // cout<<preorder(root);





}