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
    string checksubtree(TreeNode* root, unordered_map<string,int>&mp, vector<TreeNode*>&baby){
        if(!root ) return "N";
        string str = to_string(root->val);

        str =  str+","+checksubtree(root->left,mp, baby)+","+checksubtree(root->right, mp,baby);

        if(mp[str]==1){
            baby.push_back(root);
         }
                mp[str]++;
                
                
        return str;

    }


    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        vector<TreeNode*>baby;
        unordered_map<string,int>mp;
        checksubtree(root,mp,baby);
        return baby;
    }
};