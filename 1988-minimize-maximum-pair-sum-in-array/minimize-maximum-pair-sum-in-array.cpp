class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int s =0;
        int e = n-1;
        vector<int>ans;
        while(s<e){
            int sum = nums[s]+nums[e];
            ans.push_back(sum);
            s++, e--;

        }
        return *max_element(ans.begin(),ans.end());
    }
};