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
    ListNode* reverseList(ListNode* head) {
        ListNode* cur=head;
        vector<int>res;
        while(cur!=NULL){
           res.push_back(cur->val);
           cur=cur->next;
        }
        cur=head;
        for(int i=res.size()-1;i>=0;i--){
            cur->val=res[i];
            cur=cur->next;
        }
        return head;
    }
};
