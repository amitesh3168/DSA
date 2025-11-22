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
    void path(TreeNode* root, int targetSum,vector<vector<int>>& ans, vector<int>fix){
        if (!root) return;
fix.push_back(root->val);
         if(!root->right && !root->left && root->val==targetSum){
           
            ans.push_back(fix);
            return;
         }
         
        else{
        path(root->left,targetSum-root->val, ans, fix);
    
        path(root->right,targetSum-root->val, ans,fix);
}
         fix.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>ans;
        vector<int>fix;
        path(root,targetSum, ans, fix);
        return ans;
    }
};