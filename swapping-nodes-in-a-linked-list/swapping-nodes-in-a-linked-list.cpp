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
    ListNode* swapNodes(ListNode* head, int k) {
        
         ListNode *crr1 = head, *crr2 = head, *kth = NULL;
        while (--k)
            crr1 = crr1->next;
        
        kth = crr1;
        crr1 = crr1->next;
        
        while (crr1) {
            crr1 = crr1->next;
            crr2 = crr2->next;
        }
        swap(crr2->val, kth->val);
        return head;
        

        
    }
};