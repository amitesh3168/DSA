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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* i = list1;
        ListNode* j = list2;
        ListNode* temp = new ListNode(0);
        ListNode* dummy = temp;

        while(i!=NULL &&  j!=NULL){
            if(i->val<j->val){
                temp->next = new ListNode(i->val);
                i=i->next;
            }else{
                temp->next = new ListNode(j->val);
                j=j->next;
            }
            temp=temp->next;

        }
        
     while(j!=NULL){
                temp->next = new ListNode(j->val);
                j=j->next;
            
            temp=temp->next;
            }
        
     while(i!=NULL) { 
        temp->next = new ListNode(i->val);
        i=i->next;
        temp=temp->next;
        }
        




        return dummy->next;

    }
};