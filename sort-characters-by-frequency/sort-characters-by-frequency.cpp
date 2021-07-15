class Solution {
public:
    string frequencySort(string s) {
        
      unordered_map<char,int> umap; 
      priority_queue<pair<int,char>> pq;
        
        for(char c: s)
            umap[c]++;
        for(auto it: umap)
            pq.push({it.second,it.first}); 
        s="";   
        while(!pq.empty()){
            s+=string(pq.top().first,pq.top().second); 
            pq.pop();
        }
        return s;
        
    }
};

