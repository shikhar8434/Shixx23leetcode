class Solution {
public:
     int maxValue(int n, int index, int maxSum) {
        int left = 0, right = maxSum;
        while(left < right) {
            int mid = right - (right - left) / 2;
            if(valid(n, index, maxSum, mid)) {
                left = mid;
            } else {
                right = mid - 1;
            }
        }
        return left;
    }
    
    bool valid(int n, int index, int maxSum, int num) {
        long left = num > index ? ((long) num - index + num) * ((long) index + 1) / 2 : ((long) num + 1) * num / 2 + index - num + 1;
        long right = num - n + index + 1 > 0 ? ((long) num - n  + index + 1 + num) * ((long) n - index) / 2 : ((long) num + 1) * num / 2 + n - index - 1 - num + 1;
        long sum = left + right - num;
        return sum <= maxSum;
    }
};