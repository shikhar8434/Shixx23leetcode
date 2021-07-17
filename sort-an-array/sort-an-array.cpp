class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        
        priority_queue<int,vector<int>, greater<int>> pq;
        vector<int> v;
        for(int i=0;i<nums.size();i++)
        {
            pq.push(nums[i]);
        }
        while(!pq.empty())
        {
            v.push_back(pq.top());
            pq.pop();
        }
        return v;
    }
};