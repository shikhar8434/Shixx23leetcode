class Solution {
public:
    int findDuplicate(vector<int>& nums) {
          int temp;
          unordered_map<int,int> umap;
        
        for(int i=0;i<nums.size();i++)
        {
            umap[nums[i]]++;

        }
        for(auto x:umap)
        {
            if(x.second>1)
            {
                temp=x.first;
            }
        }
        return temp;
        
    }
};