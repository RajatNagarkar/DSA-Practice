#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int recur(int i, int j, vector<vector<int>> &dp, int n, vector<int> &a, int x) {
    if(j == n || i == n) {
        return 0;
    }
    // if(dp[i][j] != -1) {
    //     return dp[i][j]; 
    // }
    // if(dp[j][i] != -1) {
    //     return dp[j][i];
    // }
    int ans = recur(i, j+1, dp, n, a, x);
    if((a[i] ^ a[j]) & x == 0) {
        ans += 1;
    }
    return ans;

}

int main() {
    int t;
    
    cin>>t;
    while(t--) {
        int n, x;
        cin>>n;
        vector<int> a(n);
        for(int i = 0;i<n;i++) {
            cin>>a[i];
        }
        cin>>x;

        vector<vector<int>> dp(n, vector<int>(n, -1));
        cout<<recur(0, 0, dp, n, a, x);
    }
	return 0;
}
