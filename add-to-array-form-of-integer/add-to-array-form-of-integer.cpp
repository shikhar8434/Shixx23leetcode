class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        
          int size = num.size(), c = 0;
        for(int i = size-1; i >= 0; i--){
            c += k % 10; k /= 10;
            int val = num[i];
            num[i] = (num[i] + c) % 10;
            c = (val + c) / 10;
        }
        while(k){
            c += k % 10; k /= 10;
            num.insert(num.begin(), c % 10);
            c /= 10;
        }
        if(c)
            num.insert(num.begin(), c);
        return num;
    }
};