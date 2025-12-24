class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum =0;
        for(auto it:nums){
            sum+=it;
        }
        int left =0, right=0;
        for(int i=0 ;i<nums.size();i++){
           
            right=sum-nums[i]-left;
            if(left==right) return i;
            left+=nums[i]; 
        }
        return -1;
    }
};