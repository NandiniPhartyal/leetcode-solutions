class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(), prices.end());
        int minSum = prices[0] + prices[1];
        if (minSum <= money) return money - minSum;
        return money;
    }
};