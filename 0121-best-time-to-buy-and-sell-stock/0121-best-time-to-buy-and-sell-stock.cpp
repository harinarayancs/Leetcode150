class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty()) return 0;

    int min_price = prices[0];
    int max_profit = 0;

    for (int i = 1; i < prices.size(); ++i) {
        if (prices[i] < min_price) {
            min_price = prices[i]; // Update the minimum price
        } else if (prices[i] - min_price > max_profit) {
            max_profit = prices[i] - min_price; // Update the maximum profit
        }
    }

    return max_profit;
    }
};