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
    ListNode* rotateRight(ListNode* head, int k) {
    ListNode*  temp = head;
    if(head==NULL||head->next==NULL) return head;
    int a=1;
    while(temp->next!=NULL){
        a++;
        temp = temp->next;
    }
    temp->next = head;
    k = k%a;
    int t = a-k;
      ListNode* curr  = head;

    while(t>1){
     t--; 
     curr = curr->next;
    }
    ListNode* newhead = curr->next;
    curr->next = NULL;
 
    return newhead;
    }
};