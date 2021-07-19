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
    ListNode* middleNode(ListNode* head) {
        
        ListNode* curr1=head;
        ListNode* curr2=head;
        int c=0;
        if(head==NULL||head->next==NULL)
        {
            return head;
        }
        while(curr1!=NULL)
        {
            c++;
            curr1=curr1->next;
        }
        
        for(int i=0;i<c;i++)
        {
            curr2=curr2->next;
            if(i==c/2-1)
            {
                break;
            }
        }
        return curr2;
        
    }
};