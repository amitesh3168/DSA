class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>ans(2*n);
        int first =0;
        int second =n;
        int idx=0;
        while(first<n||second<2*n){
            ans[idx]=nums[first];
            idx++;
            ans[idx]=nums[second];
            idx++;
            first++, second++;
        }
        return ans;
    }
};