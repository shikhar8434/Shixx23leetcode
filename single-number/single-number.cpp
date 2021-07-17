class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        unordered_map<int,int>umap;
        int ans;
        for(int i=0;i<nums.size();i++)
        {
            umap[nums[i]]++;
        }
        for(auto x:umap)
        {
            if(x.second==1)
            {
                ans=x.first;
                break;
            }
        }
        return ans;
    }
};