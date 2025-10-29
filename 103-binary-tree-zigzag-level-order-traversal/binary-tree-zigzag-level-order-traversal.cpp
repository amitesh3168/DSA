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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(!root) return {};
        stack<TreeNode*>st1;
        stack<TreeNode*>st2;
        vector<vector<int>> ans;
        st1.push(root);
        while(!st1.empty() || !st2.empty()){
            vector<int>v;
            if (!st1.empty()){
                while(!st1.empty()){
                TreeNode* temp1 = st1.top();
                st1.pop();
                v.push_back(temp1->val);
                if(temp1->left) st2.push(temp1->left);
                if(temp1->right) st2.push(temp1->right);
                
            }
            
            }
            else if(!st2.empty()){
                while(!st2.empty()){
                TreeNode* temp2 = st2.top();
                st2.pop();
                v.push_back(temp2->val);
                if(temp2->right) st1.push(temp2->right);
                if(temp2->left) st1.push(temp2->left);
            }

            }
            ans.push_back(v);


        }
        return ans;





    }
};