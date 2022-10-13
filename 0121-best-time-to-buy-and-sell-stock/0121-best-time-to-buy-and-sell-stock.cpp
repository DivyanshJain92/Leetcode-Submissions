class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minSo = INT_MAX;
        int maxProfit = INT_MIN;
        for(int i = 0;i<prices.size();i++){
            if(prices[i]<minSo){
                minSo = prices[i];
            }
            int x = prices[i] - minSo;
            if(maxProfit<x){
                maxProfit = x;
            }
        }
        return maxProfit;
    }
};