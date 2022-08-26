class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minm = prices[0];
        int maxm = 0;
        for(int i = 0;i<prices.size();i++)
        {
            if(prices[i]>minm)
            {
                maxm = max(maxm,prices[i]- minm);
                
            }
            else
            {
                 minm=prices[i];
            }
        }
        return maxm;
    }
};