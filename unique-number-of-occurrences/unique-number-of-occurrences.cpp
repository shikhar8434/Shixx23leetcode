class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        bool res=true;
        set<int> s;
        
        
        unordered_map<int,int> umap;
        for(int i=0;i<arr.size();i++)
        {
            umap[arr[i]]++;
        }
        for(auto x:umap)
        {
          
            s.insert(x.second);
        }
        if(s.size()!=umap.size())
        {
            res=false;
        }
        
        return res;
    }
};