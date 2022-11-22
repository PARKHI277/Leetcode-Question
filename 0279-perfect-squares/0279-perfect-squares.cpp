class Solution {
public:
    int solve(int n,vector<int>&dp)
{
        int mn  = INT_MAX;
        if(n == 0)
        {
            return  0;
        }
        if(dp[n] != -1)
        {
            return dp[n];
        }
        for(int num = 1;num <= sqrt(n);num++)
        {
            int sqNum = num*num;
            int currCount = 1 + solve(n-sqNum,dp);
            mn = min(mn,currCount);
        }
        
        return dp[n] = mn;
}
    int numSquares(int n)
    {
        vector<int>dp(n+1,-1);
        return solve(n,dp);
        
    }
    
    
};