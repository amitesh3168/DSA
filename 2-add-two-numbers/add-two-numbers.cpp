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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* first = l1;
        ListNode* second = l2;
        int sum = 0;
        int carry = 0;
        ListNode* dummy;
        ListNode* temp = new ListNode(0);
        dummy = temp;
        while(first!=NULL||second!=NULL){
             int sum = 0;
             sum+=carry;
            if(first){
                sum+= first->val;
                first = first->next;
            }
            if(second){
                sum+=second->val;
                second = second->next;
            }
            temp->next = new ListNode(sum%10);
            temp =temp->next;
            carry = sum/10;
        }
       if(carry!=0) temp->next = new ListNode(carry);
        return dummy->next;

    }
};