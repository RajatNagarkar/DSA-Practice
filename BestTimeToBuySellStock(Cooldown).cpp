#include<bits/stdc++.h>

using namespace std;

class Solution {
    private:
        vector<vector<int>> dp;
        int maxProfitHelp(int i, vector<int>& prices, int n, int buyOrSell) {
            if(i >= n){
                return 0;
            }
            int x = 0;
            if(dp[i][buyOrSell] != -1) return dp[i][buyOrSell];
            if(buyOrSell == 0) {
                int buy = maxProfitHelp(i+1, prices, n, 1) - prices[i];
                int noBuy = maxProfitHelp(i+1, prices, n, 0);
                x = max(buy, noBuy);
            } else {
                int sell = maxProfitHelp(i+2, prices, n, 0) + prices[i];
                int noSell = maxProfitHelp(i+1, prices, n, 1);
                x = max(sell, noSell);
            }
            dp[i][buyOrSell] = x;
            return x;
        }
    public:
        int maxProfit(vector<int>& prices) {
            int n = prices.size();
            dp.resize(n, vector<int>(2, -1));
            return maxProfitHelp(0, prices, n, 0);
        }
};

int main(){
    int n;

    cin>>n;
    vector<int> prices(n);
    for(int i = 0;i<n;i++) {
        cin>>prices[i];
    }
    
    Solution obj;
    cout<<obj.maxProfit(prices);

    return 0;
}