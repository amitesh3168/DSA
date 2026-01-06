class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int l=0;
        int r =nums.size()-1;
        vector<int> ans(nums.size());
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot){
            ans[l++]=nums[i];
            }
        }
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]>pivot){
            ans[r--]=nums[i];
            }
        }
        while(l<=r){
            ans[l++] =pivot;
        }
        return ans;
    }
};