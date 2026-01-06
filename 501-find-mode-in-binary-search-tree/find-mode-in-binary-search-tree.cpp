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
        void in(TreeNode* root, unordered_map<int, int>&mp){
            if(!root) return;
            in(root->left, mp);           
            mp[root->val]++;
            in(root->right, mp);
        }

    vector<int> findMode(TreeNode* root) {
      //  vector<int>ans;
        unordered_map<int, int>mp;
       
        in(root,mp);
      vector<int>mostfreq;
       int idx=0;
        int maxi=INT_MIN;
        for(auto it:mp){
            maxi = max (maxi,it.second);
        }
        for(auto it:mp){
            if(it.second==maxi){
                mostfreq.push_back(it.first);
            }
        }

       


       return mostfreq;
    }
};