class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_Profit = 0;
        int min_value = prices[0];
        for(int i = 1;i<prices.size();i++){
            if(prices[i]>min_value){
                max_Profit = max(max_Profit,prices[i]-min_value);
            }
            min_value = min(min_value,prices[i]);
        }
        return max_Profit>0?max_Profit:0;
    }
};