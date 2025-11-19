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
vector<int> ans;
void inorder(TreeNode* root){
    if (!root){
        return;
    }
    inorder(root->left);
    ans.push_back(root->val);
    inorder(root->right);
}
    int rangeSumBST(TreeNode* root, int low, int high) {
        if (!root){
            return 0;
        }
        inorder(root);
        int sum =0;
        for(int v:ans){
            if(v>=low&&v<=high){
                sum+=v;
            }
        }
        return sum;
    }
};