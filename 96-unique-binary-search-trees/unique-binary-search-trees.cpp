class Solution {
public:
    int dp[20];
    int dedo(int n){
        if(n<=1) return 1;
        int ans = 0;
        for(int i =1;i<=n;i++){
            ans += dedo(i-1)*dedo(n-i);
        }
        return dp[n] =ans;
    }
    int numTrees(int n) {
        memset(dp ,-1, sizeof(dp));
        return dedo(n);
    }
};