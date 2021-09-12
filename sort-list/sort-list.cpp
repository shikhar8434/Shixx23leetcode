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
        
        priority_queue<int,vector<int> , greater<int>> pq;
        
        ListNode *curr1=head;
        
        while(curr1!=NULL)
        {
            pq.push(curr1->val);
            curr1=curr1->next;
        }
        ListNode *curr2=head;
        while(!pq.empty())
        {
            curr2->val=pq.top();
            pq.pop();
            curr2=curr2->next;
        }
        return head;
    }
};