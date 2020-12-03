class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        if (prices.size() < 1)
        {
            return 0;
        }
        
        int min = prices[0];
        int maxProfit = 0;
        
        for (int i = 0; i < prices.size(); i++)
        {
            if(prices[i] < min)
            {
                min = prices[i];
            }
            else if(prices[i] - min > maxProfit)
            {
                maxProfit = prices[i] - min;
            }
            
        }
        return maxProfit;
    }
};
