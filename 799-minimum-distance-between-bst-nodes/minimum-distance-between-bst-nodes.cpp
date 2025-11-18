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
vector<int>Inorder_result;
void Inorder(TreeNode* root){
    if(!root) return;
    Inorder(root->left);
    Inorder_result.push_back(root->val);
    Inorder(root->right);
    
}
    int minDiffInBST(TreeNode* root) {
        Inorder(root);
        int small=INT_MAX;
        for(int i=1;i<Inorder_result.size();i++){
            int sum = abs(Inorder_result[i]-Inorder_result[i-1]);
            small = min(small, sum);
        }
        return small;
    }
};