/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
bool parentcheck(TreeNode* root, int x, int y){
    if(!root) return 0;
//    int main =root->val;
   if(root->left && root->right){ if(root->left->val==x && root->right->val==y){
        return 1;
    }
    if(root->left->val==y && root->right->val==x){
        return 1;
    }}
   return parentcheck (root->left,x,y)|| parentcheck (root->right,x,y);




}
    bool isCousins(TreeNode* root, int x, int y) {
      int level =-1;
        queue<TreeNode*>q;
        q.push(root);
        int dx=0;
        int dy=0;
        while(!q.empty()){
            int size=q.size();
            level++;
            for(int i=0;i<size;i++){
                TreeNode* node=q.front();
                int vali =node->val;
                if (node->val==x){
                    dx=level;
                }
                if(node->val==y){
                    dy=level;
                }
                q.pop();
                if(node->left){
                    q.push(node->left);
                }
                if(node->right){
                    q.push(node->right);
                }
         }
            
        }
        if(dx!=dy) { 
            return 0;
            }
        if(parentcheck(root,x,y)){
            return 0;
        }

        return 1;
    }
};