class Solution {
public:

    int dp[10001];
    int solve(vector<int>& coins, int amount){
        if(amount == 0)  return 0;
        if(amount<0) return INT_MAX;
        if(dp[amount]!=-1) {
            return dp[amount];
        }
        int mini =INT_MAX;

        for(auto it: coins){
            int uttar  = solve(coins, amount-it);
            if(uttar!=INT_MAX){
                mini =  min(mini, 1+uttar);
            }
        }
        return  dp[amount]=mini;

    }
    int coinChange(vector<int>& coins, int amount) {
        memset(dp, -1, sizeof(dp));
        int ans = solve(coins, amount);
        if(ans==INT_MAX) return -1;
         return ans;
    }
};