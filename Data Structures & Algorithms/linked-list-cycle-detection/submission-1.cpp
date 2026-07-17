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
    bool hasCycle(ListNode* head) {
        unordered_set<ListNode *>st;
        ListNode*tmp=head;
        while(tmp!=NULL){
            if(st.find(tmp)!=st.end()){
                return true;
            }
            st.insert(tmp);
            tmp=tmp->next;
        }
        return false;
    }
};
