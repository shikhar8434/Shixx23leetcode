/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int fun(TreeNode* root)
    {
        if(root)
        {
            return root->val;
        }
        else{
            return 0;
        }
    }
    int sumEvenGrandparent(TreeNode* root) {
        
        if(!root)
        {
            return 0;
        }
        
        queue<TreeNode*> q;
        q.push(root);
        int sum=0;
        while(!q.empty())
        {
            TreeNode *curr= q.front();
            q.pop();
            
            if(curr->val%2==0)
            {
                if(curr->left)
                {
                    sum+=fun(curr->left->left)+fun(curr->left->right);
                }
                if(curr->right)
                {
                    sum+=fun(curr->right->right)+fun(curr->right->left);
                }
                
            }
            
            if(curr->left)
            {
                q.push(curr->left);
            }
            if(curr->right)
            {
                q.push(curr->right);
            }
        }
        return sum;
        
    }
};