class Solution {
public:
   
    vector<string> topKFrequent(vector<string>& words, int k) {
        
        unordered_map<string,int> umap;
        for(int i=0;i<words.size();i++)
        {
            umap[words[i]]++;
        }
        priority_queue<pair<int,string>,vector<pair<int,string>>,MyComp> pq;
        for(auto x:umap)
        {
            pq.push({x.second,x.first});
            if(pq.size()>k)
            {
                pq.pop();
            }
        }
         vector<string> res;
        while(!pq.empty()) {
            res.insert(res.begin(), pq.top().second);
            pq.pop();
        }
        return res;
        
    }
     private:
    struct MyComp{
        
        bool operator()(const pair<int,string> &p1, const pair<int,string> &p2)
        {
            if(p1.first!=p2.first)
            {
                return p1.first>p2.first;
            }
            else{
                return p1.second<p2.second;
            }
        }
        
    };
};