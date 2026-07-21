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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        if(head==NULL ||head->next==NULL)return NULL;
    
        int c=0;
        // if(head->next->next==NULL) {
        //     if(n==2){
        //         return head->next;
        //     }else{
        //         head->next= NULL;
        //         return head;
        //     }
        // }
        while(temp!=NULL){
            c++;
            temp=temp->next;
        }
            if(n == c)
    return head->next;
        int a = c-n;
         ListNode* curr =head;
        for(int i=1;i<a;i++){
            curr=curr->next;
        }
        curr->next=curr->next->next;
        return head;
    }
};