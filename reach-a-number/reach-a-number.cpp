class Solution {
public:
    int reachNumber(int target) {
        
        int sum=0,i=0;
        target=abs(target);
        while(sum<target||(sum-target)%2!=0)
        {
            i++;
            sum+=i;
        }
        return i;
    }
};