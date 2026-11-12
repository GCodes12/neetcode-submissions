class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int l = 0; // buy pointer
        int maxProfit = 0;

        for (int r = 1; r < n; r++) {
            if (prices[r] < prices[l]) {
                l = r; // move buy pointer to cheaper price
            } else {
                maxProfit = max(maxProfit, prices[r] - prices[l]);
            }
        }
        return maxProfit;
    }
};
