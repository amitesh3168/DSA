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
    void inorder(TreeNode* root, vector<int>& ans){
        if(!root )return;
        inorder(root->left,ans);
        ans.push_back(root->val);
        inorder(root->right,ans);

    }
    TreeNode* increasingBST(TreeNode* root) {
        vector<int>ans;
          inorder(root, ans);
        TreeNode* temp = new TreeNode(-1);
        TreeNode* head =temp;
      
        for(int i=0;i<ans.size();i++){
            TreeNode* dum = new TreeNode(ans[i]);
            temp->right =dum;
            temp=temp->right;
        }
        return head->right;
    }
};