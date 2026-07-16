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
    void reorderList(ListNode* head) {
        ListNode* slow = head;
         ListNode* fast = head;
         while(fast &&fast->next!=NULL){
            slow = slow->next;
            fast  = fast->next->next;
         }
           ListNode* prev = NULL;
           ListNode* curr = slow->next;
           slow->next = NULL;
          while(curr){
             ListNode*  newnode = curr->next;
             curr->next = prev;
             prev= curr;
             curr = newnode;
          }
           ListNode* f =head;
           ListNode* l = prev;
           while(l){
            ListNode* temp1 = f->next;
            ListNode* temp2 = l->next;
            f->next = l;
            l->next = temp1;
            f=temp1;
            l=temp2;
            
           }

    }
};