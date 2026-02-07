class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy1 = INT_MAX, buy2 = INT_MAX;
        int profit1 = 0, profit2 = 0;

        for(int p : prices){
            buy1 = min(buy1, p);
            profit1 = max(profit1, p - buy1);

            buy2 = min(buy2, p - profit1);
            profit2 = max(profit2, p - buy2);
        }

        return profit2;

    }
};