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
    ListNode* sortList(ListNode* head) {
        vector<int> arr;
        while(head!=NULL){
            arr.push_back(head->val);
            head = head->next;
        }
        sort(arr.begin(),arr.end());
        ListNode* mhead = NULL;
        ListNode* tail = NULL;
        for(int i=0;i<arr.size();i++){
              ListNode* node = new ListNode(arr[i]);
              if(mhead==NULL){
                tail = mhead= node;
              }else{
                tail->next = node;
                 tail=node;
              }

        }

         return mhead;
    }
};