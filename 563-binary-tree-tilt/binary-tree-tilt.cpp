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
   int total =0;
   int find(TreeNode* root){
        if(!root) return 0;
   
        int lh  = find(root->left);
        int rh =  find(root->right);
        int sum = abs(lh-rh);
        total+=sum;
        return lh + rh + root->val ;
}
    int findTilt(TreeNode* root) {
      find(root);
      return total;

    }
};