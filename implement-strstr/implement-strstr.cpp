class Solution {
public:
    int strStr(string haystack, string needle) {
        
         int n1 = haystack.size(), n2 = needle.size(), p = 0;
        while (p + n2 - 1 < n1) {
            if (haystack.substr(p, n2) == needle) {
                return p;
            }
            while (p++ + n2 - 1 < n1 && haystack[p] != needle[0]);
        }
        return -1;
    }
};