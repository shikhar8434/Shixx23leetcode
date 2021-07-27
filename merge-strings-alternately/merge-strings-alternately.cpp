class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        
        string str="";
        
        int i= 0;
        
        
        int n1=word1.size();
        int n2= word2.size();
        
        if(n1>n2)
        {
            for(int k=0;k<n1;k++)
            {
                if(k<n2)
                {
                    str+=word1[i];
                    str+=word2[i];
                    i++;
                }
                else{
                    str+=word1[k];
                }
            }
        }
        else if(n1<n2)
        {
            for(int k=0;k<n2;k++)
            {
                if(k<n1)
                {
                    str+=word1[i];
                    str+=word2[i];
                    i++;
                }
                else{
                    str+=word2[k];
                }
            }
        }
        else{
            for(int k=0;k<n1;k++)
            {
                str+=word1[i];
                str+=word2[i];
                i++;
            }
        }
        return str;
        
        
        
    }
};