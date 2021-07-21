class Solution {
public:
    int myAtoi(string s) {
        
       stringstream ss(s);
        int a =0;
        ss>>a;
        return a;
    }
};