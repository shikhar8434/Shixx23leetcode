class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        unordered_map<int,int> mp;
        bool res=false;
        
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        
        for(auto it:mp)
        {
            if(it.second>1)
            {
                res=true;
                break;
            }
        }
        return res;
    }
};