class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        
        priority_queue<int> pq;
        int n= matrix.size(),t;
        int m= matrix[0].size();
        int x= m*n;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                pq.push(matrix[i][j]);
                if(pq.size()>k)
                {
                    pq.pop();
                    
                }
            }
        }
        return pq.top();
        
    }
};