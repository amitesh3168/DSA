class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n  = nums.size();
        int s  = 0;
        int e = n-1;
       
        while(s<=e){
            int mid  = s+(e-s)/2;
            
            if(nums[mid] == target ){
                int left  =mid;
                int right =mid;
                while(left>=0 && nums[left]==target){
                    left--;
                }
                while(right<=n-1 && nums[right]==target){
                    right++;
                }
                return {left+1,right-1};
            }
            
            else if(nums[mid]>target){
                e =mid-1;
            }else{
                s= mid+1;
            }
        }
        return {-1,-1};
    }
};