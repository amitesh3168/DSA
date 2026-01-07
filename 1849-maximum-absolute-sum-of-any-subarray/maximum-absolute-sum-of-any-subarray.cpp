class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int bestmin = nums[0];
        int chhota = nums[0];
        int bestmax = nums[0];
        int bda = nums[0];     
        for(int i=1;i<nums.size();i++){
            int abhimax = nums[i]+bestmax;
            int abhimin =nums[i]+bestmin;
            int a =nums[i];
            bestmax = max(abhimax, a);
            bda=max(bda,bestmax);
            bestmin = min(abhimin, a);
            chhota=min(chhota,bestmin);
        }
        return max(abs(bda),abs(chhota));
    }
};