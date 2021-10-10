class Solution {
public:
    int climbStairs(int n) {
        
        if(n<=2)
        {
            return n;
        }
        
        int first=1,second=2,res;
        for(int i=3;i<=n;i++)
        {
            res=first+second;
            first=second;
            second=res;
        }
        return res;
    }
};