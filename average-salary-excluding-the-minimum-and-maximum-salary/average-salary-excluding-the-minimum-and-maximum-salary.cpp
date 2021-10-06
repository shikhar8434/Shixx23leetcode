class Solution {
public:
    double average(vector<int>& salary) {
        double sum,avg;
        sort(salary.begin(),salary.end());
        
        for(int i=0;i<salary.size();i++)
        {
            if(i!=0&&i!=(salary.size())-1)
            {
                sum+=salary[i];
            }
        }
        avg= sum/(salary.size()- 2);
        
        return avg;
    }
};