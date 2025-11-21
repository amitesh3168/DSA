class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>ans;
        ans.reserve(2*n);
        int first =0;
        int second =n;
        int idx=0;
        while(first<n||second<2*n){
            ans.push_back(nums[first]);
            ans.push_back(nums[second]);
            first++, second++;
        }
        return ans;
    }
};