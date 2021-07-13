class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        int t;
        
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i+1]>arr[i]&&arr[i+1]>arr[i+2])
            {
               t=i+1;
                break;
                
            }
        }
        return t;
        
    }
};