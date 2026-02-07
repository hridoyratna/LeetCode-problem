class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0, bestBuy = prices[0];

        for(int i = 0; i < prices.size(); i++){
            int current_profit = 0;
            if(prices[i] > bestBuy){
                current_profit = prices[i] - bestBuy;
                maxProfit += current_profit;
            }
            bestBuy = prices[i];
        }
        return maxProfit;
        
    }
};