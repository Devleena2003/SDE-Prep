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
    ListNode* deleteMiddle(ListNode* head) {
       ListNode* slow=head;
       ListNode* fast=head;
       ListNode* temp=NULL;
       if(head->next==NULL){
        delete(head);
        return NULL;
       }
       while(fast && fast->next){
        temp=slow;
        slow=slow->next;
        fast=fast->next->next;
       } 
       temp->next=slow->next;
       delete(slow);
         return head;
    }
  
};