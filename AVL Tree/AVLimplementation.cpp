#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    int height;
    Node *left, *right;
    Node(int value) {
        data =value;
        height = 1;
        left = right = NULL;
    }
};
int getheight(Node *root){
    if(!root){
    return 0;}

    return root->height;
}
int getbalance(Node *root){
    return getheight(root->left) - getheight(root->right);
}
Node* rightrotation(Node* root){
    Node* child = root->left;
    Node* childright = child->right;

    child->right = root;
    root->left=childright;

    root->height = 1 + max(getheight(root->left), getheight(root->right));
    child->height = 1 + max(getheight(child->left), getheight(child->right));

    return child;
}
Node* leftrotation(Node* root){
    Node* child = root->right;
    Node* childleft = child->left;

    child->left = root;
    root->right = childleft;

    root->height = 1 + max(getheight(root->left), getheight(root->right));
    child->height = 1 + max(getheight(child->left), getheight(child->right));


    return child;
}

Node* insert(Node *root, int value){
    if (!root){ // when root not exist
        return new Node(value);
    }
    if (root->data < value){
        root->right = insert(root->right, value);
    }
    else if( root->data > value ){
        root->left = insert(root->left, value);
    }
    else {
        return root; //duplicate value are not allowed
    }
   //Update Height

    root->height=1+max(getheight(root->left), getheight (root->right));

    // Balance Check
    int balance = getbalance(root);
 
 
// Left Left case (LL)
  if (balance < 1 && root->left->data > value){
     return rightrotation(root);
  }
 
 //Right Right case (RR)
 else if (balance < -1 && root->right->data < value ){
   return leftrotation(root);
 }
 
 //Left Right case (LR)
 else if (balance > 1 && root ->left->data < value){
    root->left = leftrotation(root->left);
    return rightrotation(root);
 }
 
 //Right Left case (RL)
else if (balance < -1 && root ->right->data > value) {
    root->right=rightrotation(root->right);
    return leftrotation(root); 
}
}  
void preorder(Node* root){
    if (!root){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
  }

int main (){
    Node *root = NULL;

    insert(root,12);
    insert(root,32);
    insert(root,22);
    insert(root,2);
    insert(root,23);
    insert(root,99);
cout<<" Preorder: "<<endl;
preorder(root);

}