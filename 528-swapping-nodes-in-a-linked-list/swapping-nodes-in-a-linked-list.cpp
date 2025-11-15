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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* first =head; ListNode* second =head;
        for(int i=0;i<k-1;i++){
                second=second->next;
        }
        ListNode* pointout=second;
        while(second->next){
            first=first->next;
            second=second->next;
        }
        swap(pointout->val, first->val);
        return head;



        // ListNode* temp  = head;
        // vector<int>v;
        // while(temp){
        //     v.push_back(temp->val);
        //     temp=temp->next;
        // }
        // int n=v.size();
        // int dum = v[k-1];
        // v[k-1] =v[n-k];
        // v[n-k] = dum;

        // ListNode* temp2 = new ListNode(0);
        // ListNode* start=temp2;
        // for(int it:v){
        //     temp2->next =new ListNode(it);
        //     temp2=temp2->next;
        // }
        // return start->next;
    }
};