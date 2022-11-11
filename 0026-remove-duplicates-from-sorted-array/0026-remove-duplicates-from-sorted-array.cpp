class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
         int j = 0;
        int count  =  1;
        for(int i = 1;i<nums.size();i++)
        {
            if(nums[i] != nums[i-1])
            {
                count++;
                j++;
                nums[j] = nums[i];
            }
        }
        return count;
    }
};