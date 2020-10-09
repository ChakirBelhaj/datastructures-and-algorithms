class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit = 0;
        int minprice = 2147483647;
        for (int i = 0; i < prices.size(); i++) {
            if (prices.at(i) < minprice) {
                minprice = prices.at(i);
            }
            else if (prices.at(i) - minprice > maxprofit) {
                maxprofit = prices.at(i) - minprice;
            }
        }
        
        return maxprofit;
    }
};