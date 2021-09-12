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
    vector<int> nextLargerNodes(ListNode* head) {
        
        vector<int> v;
        
        if(head==NULL)
        {
            return v;
        }
        
        ListNode *curr1=head;
        
        while(curr1!=NULL)
        {
            ListNode *curr2=curr1;
            int r;
            while(curr2!=NULL)
            {
                 r=0;
                if(curr2->val>curr1->val)
                {
                    v.push_back(curr2->val);
                    curr2=curr1;
                    r=1;
                    break;
                }
                else{
                    curr2=curr2->next;
                }
            }
            if(r==0)
            {
                v.push_back(0);
            }
            curr1=curr1->next;
        }
        return v;
    }
};