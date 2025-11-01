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
class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_map<int,int>mp;
        for(auto it:nums){
            mp[it]++;
        }
        ListNode* temp = new ListNode(0);
        temp->next = head;
      
         head = temp;
      
        
          while(temp->next!=NULL){
            if(mp.count(temp->next->val)){
               temp->next = temp->next->next;
            }
            else{
                
                temp = temp->next;


            }
          }


            
            return head->next;
            
        }
};