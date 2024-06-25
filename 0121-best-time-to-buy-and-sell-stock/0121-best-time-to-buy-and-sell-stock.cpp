class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy_price = prices[0];
        int profit = 0;
            
            for(int n = 1;n<prices.size();n++){
                if(prices[n]<buy_price){
                    buy_price = prices[n];
                }
                else{
                    int current_profit = prices[n]-buy_price;
                    profit = (current_profit > profit)?current_profit:profit;
                }
            }
        return profit;
    }
};