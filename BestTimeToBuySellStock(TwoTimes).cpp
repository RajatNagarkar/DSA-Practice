#include<bits/stdc++.h>

using namespace std;

class Solution {

    private:
        vector<vector<vector<int>>> dp;
        int maxProfit(int i, vector<int> &prices, int n, int buyOrSell, int k) {
            if(i >= n || k == 0){
                return 0;
            }
            if(dp[i][k][buyOrSell] != -1) return dp[i][k][buyOrSell];
            int x = 0;
            if(buyOrSell == 0) {
                int buy = maxProfit(i+1, prices, n, 1, k) - prices[i];
                int noBuy = maxProfit(i+1, prices, n, 0, k);
                x = max(buy, noBuy);
            } else {
                int sell = maxProfit(i+1, prices, n, 0, k-1) + prices[i];
                int noSell = maxProfit(i+1, prices, n, 1, k);
                x = max(sell, noSell);
            }
            dp[i][k][buyOrSell] = x;
            return x;
        }
    public:
        int maxProfit(vector<int>& prices) {
            int n = prices.size();
            dp.resize(n, vector<vector<int>>(3, vector<int>(2, -1)));
            return maxProfit(0, prices, n, 0, 2); //2 is the number of transactions
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