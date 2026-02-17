class Solution {
public:

      int dp[102];
  int chori(vector<int>& nums,int i){
            if(i>=nums.size()) return 0;
            if(dp[i]!=-1) return dp[i];

            int karle = nums[i]+chori(nums,i+2);
            int nakar =chori(nums, i+1);

            return dp[i]=max(karle, nakar);
        }
    int rob(vector<int>& nums) {  
        memset(dp, -1, sizeof(dp));
        return chori(nums,0);
    }
};