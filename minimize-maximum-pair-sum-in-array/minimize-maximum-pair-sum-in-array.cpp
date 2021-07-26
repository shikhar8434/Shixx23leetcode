class Solution {
public:
    int minPairSum(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int j=0,n=nums.size();
        int k=n-1;
        int max=INT_MIN;
        while(j<k)
        {
            int sum= nums[j]+nums[k];
            if(sum>max)
            {
                max=sum;
            }
            j++;
            k--;
        }
        return max;
        
    }
};