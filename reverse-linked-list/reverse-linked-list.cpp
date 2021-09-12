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
        stack<int> s;
        ListNode *curr1=head;
        ListNode *curr2= head;
        
        while(curr1!=NULL)
        {
            s.push(curr1->val);
            curr1=curr1->next;
        }
        while(curr2!=NULL)
        {
            curr2->val=s.top();
            s.pop();
            curr2=curr2->next;
        }
        return head;
    }
};