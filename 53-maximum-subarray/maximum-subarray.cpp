class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi  = nums[0];
        int ans = nums[0];
        for(int i =1;i<nums.size();i++){
            int curr  = maxi + nums[i];
            int currans = nums[i];
            maxi = max(curr, currans);
            ans = max(ans, maxi);
        }
        return ans;
        
    }
};