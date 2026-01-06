class Solution {
public:

    int maxProduct(vector<int>& nums) {
        int bestmin = nums[0];
        int bestmax = nums[0];
        int ans  = nums[0];
        for(int i =1;i<nums.size();i++){
            int a =  bestmax*nums[i];
            int b = bestmin*nums[i];
            int c = nums[i];
            bestmax = max(c, max(a,b));
            bestmin = min(c,min(a,b));
            ans = max(ans, max(bestmax, bestmin));
        }
        return ans;
    }
};