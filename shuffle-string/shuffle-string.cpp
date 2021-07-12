class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        
        int n=indices.size();
        
        string s3=s;
        for(int i=0;i<n;i++)
        {
            s3[indices[i]]=s[i];
        }
        
        return s3;
    }
};