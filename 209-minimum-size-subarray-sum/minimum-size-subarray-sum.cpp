class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int bestmin = INT_MAX;
        int low=0;
        int high = 0;
        int sum = nums[low];
        int n = nums.size();
        while(high<n){
            if(sum<target){
                high++;
                if(high==n) break;
                sum+=nums[high];
            }else{
                bestmin= min(bestmin, high-low+1);
                if(low==n) break;
                sum-=nums[low];
                low++;

            }

        }
        if(bestmin==INT_MAX) return 0;
        
        return bestmin;
    }
};