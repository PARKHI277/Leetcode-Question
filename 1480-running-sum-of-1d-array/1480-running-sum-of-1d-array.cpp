class Solution {
public:
    vector<int> runningSum(vector<int>& nums) 
    {
        int n = nums.size();
        int sum = 0;
        vector<int>arr;
        for(int i = 0;i<n;i++)
        {
            sum = sum + nums[i];
            arr.push_back(sum);
        }
        
        return arr;
    }
};