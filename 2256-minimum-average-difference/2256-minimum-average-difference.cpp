class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        long totalsum = 0;
        long currentsum = 0;
        int n = nums.size();
        int m = INT_MAX;
        int index = 0;
       
        for(auto i : nums)
        {
            totalsum += i;
        }
        
        
        for(int i=0; i<n; i++)
        {
            currentsum  = currentsum + nums[i];
            int avg1 = currentsum/(i+1);
            if(i==n-1)
            {
                if(avg1<m)
                {
                    return n-1;
                }
                else
                    break;
            }
            float avg2 = (totalsum - currentsum)/(n-i-1);
            
            if(abs(avg1-avg2)<m)
            {
                m = abs(avg1-avg2);
                index = i;
            }
        }
        
        return index;
        
    }
};