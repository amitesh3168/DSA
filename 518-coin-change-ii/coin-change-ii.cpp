class Solution {
public:
        int dp[301][5001];
    int coin(vector<int>& coins, int amount,  int i ,int n){
        if(amount==0) return 1;
        if(i>=n) return 0;
        if(dp[i][amount]!=-1) return dp[i][amount];
        if(coins[i]>amount) {
            return coin(coins, amount, i+1, n);
        }

        int take = coin(coins, amount-coins[i], i, n);
        
        int skip = coin(coins, amount, i+1, n);

        return dp[i][amount]=  take + skip;

    }
    int change(int amount, vector<int>& coins) {
        memset(dp ,-1,sizeof(dp));
        int n = coins.size();
        int i =0;
        return coin(coins, amount, i, n);
    }
};