class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxPro = 0;
        int min_price = INT_MAX;

        for(int i = 0; i < prices.size(); i++){
            maxPro = max(maxPro, prices[i] - min_price);
            min_price = min(min_price, prices[i]);
        }
        return maxPro;
    }
};
