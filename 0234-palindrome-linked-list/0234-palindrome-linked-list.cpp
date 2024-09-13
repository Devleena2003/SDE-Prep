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
ListNode* reverse(ListNode*head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    ListNode* newHead=reverse(head->next);
    head->next->next=head;
    head->next=NULL;
    return newHead;
}
    bool isPalindrome(ListNode* head) {
         if (head == NULL || head->next == NULL) {
        
         // It's a palindrome by definition
        return true; 
    }
       //find the middle of the ll
         ListNode* slow = head;
        ListNode* fast = head;
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* rev = reverse(slow);
        while (rev != nullptr) {
            if (head->val != rev->val) {
                return false;
            }
            head = head->next;
            rev = rev->next;
        }
        return true;
    }
};