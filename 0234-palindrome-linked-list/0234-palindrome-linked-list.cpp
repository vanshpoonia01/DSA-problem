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
    bool isPalindrome(ListNode* head) {
        ListNode* slow =head;
        ListNode* fast = head;
        while(fast &&fast->next!=NULL){
            fast= fast->next->next;
            slow = slow->next;
        }


        ListNode* curr = slow;
        ListNode* prev = NULL;
        while(curr ){
            ListNode* newnode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = newnode;
        }
    while(prev){
        if(head->val != prev->val){
            return false;
        }
        head = head->next;
        prev = prev->next;
    }
return true;
    }
};