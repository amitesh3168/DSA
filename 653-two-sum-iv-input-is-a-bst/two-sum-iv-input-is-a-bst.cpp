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

vector<int>value;
void pre(TreeNode* root){
    if(!root) return;
    value.push_back(root->val);
    pre(root->left);
    pre(root->right);
}
    bool findTarget(TreeNode* root, int k) {
        pre(root);
        for(int i=0;i<value.size()-1;i++){
            int sum = k-value[i];
            for(int j=i+1;j<value.size();j++){
                if(sum==value[j]) return 1;
            }
        }
        return 0;
    }
};