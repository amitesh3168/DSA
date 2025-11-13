/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* first=headA;
        ListNode* second = headB;
        while(first!=second){
            if(first!=NULL){
                first = first->next;

            }else{
                first = headB;
            }
            if(second!=NULL){
                second=second->next;

            }else{
                second = headA;
            }
        }
        return first;
    }
};