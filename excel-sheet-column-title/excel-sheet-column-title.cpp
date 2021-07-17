class Solution {
public:
    string convertToTitle(int columnNumber) {
        
        string str="";
    
    while(columnNumber!=0)
    {
        str+=('A'+(columnNumber- 1)%26);
        columnNumber= (columnNumber- 1)/26; 
    }
    
        reverse(str.begin(),str.end());
        return str;
        
    }
};