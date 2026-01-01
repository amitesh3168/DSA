/**


 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
   TreeNode* createbst(vector<int>&tree, int s,int e){
    if(s>e) return NULL;
        int mid = s +    (e-s)/2;
        TreeNode* temp= new TreeNode(tree[mid]);
        temp->left=createbst(tree,s,mid-1);
        temp->right=createbst(tree,mid+1,e);
        return temp;
        
    }
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int>givenlist;
        
        while(head){
            givenlist.push_back(head->val);
            head=head->next;
        }
        return createbst(givenlist,0,givenlist.size()-1);

        




    }
};