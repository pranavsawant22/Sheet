//Problem link : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    auto maxProfit(vector<int>& prices) {
        std::ios::sync_with_stdio(false);
        std::cin.tie(nullptr);
        
        int best=0,minelem = INT_MAX;
        for(int i=0;i<prices.size();i++){
            minelem = min(minelem,prices[i]);
            best = max(best,prices[i]-minelem);
        }
        return best;
    };
};