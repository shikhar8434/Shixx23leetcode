class Solution {
public:
    
    const int mod = 1e9+7;
    
    long long int exhaustOrders(int orders, int i, int val) {
        int d = orders / (i+1);
        int r = orders % (i+1);
        long long int p = val, q = val - d;
                    
        int tval = (i+1)*((p + 1) * p/2 - (q + 1) *q/2) % mod;
        tval = (tval + r * q) % mod;
        return tval;
    }
    
    int maxProfit(vector<int>& nums, int orders) {
        
        sort(nums.begin(), nums.end(), greater<int>());
        int ans = 0, i = 0, n = nums.size();
        
        while(i < n && orders > 0) {
            if(i+1 < n) {
                int f = (i+1)*(nums[i] - nums[i+1]);
                int tval = 0;
                
                if(orders < f) {
                    tval = (tval + exhaustOrders(orders, i, nums[i]));
                }
                else {
                    long long int p = nums[i], q = nums[i+1];
                    tval = (i+1)*((p + 1) * p/2 - (q + 1) * q/2) % mod;
                }
                
                ans = (ans + tval) % mod;
                orders -= min(orders, f);
            }
            
            i++;
        }
        
        if(orders == 0) {
            return ans;
        }
        
        ans = (ans + exhaustOrders(orders, n-1, nums[n-1])) % mod;
        return ans;
    }
};