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
    ListNode* swapPairs(ListNode* head) {
        
        if(head==NULL || head->next == NULL){
            return head;
        }
        ListNode* newNode = new ListNode(0);
        newNode->next = head;
        ListNode* temp = head;
        
        while(temp->next!=NULL){
            int  s = temp->val;
            temp->val = temp->next->val;
            temp->next->val = s;
            if(temp->next->next!=NULL){
                temp = temp->next->next;
            }else{
                temp= temp->next;
            }
        }
        return newNode->next;
    }
};

