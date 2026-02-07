class Solution {
public:


    int minRemoval(vector<int>& nums, int k) {

        int  n  = nums.size();
        sort(nums.begin(),nums.end());
        int curr = 0;
        int idx =0;
       for(int i =0;i<n;i++){
        while(1LL* nums[i]>1LL * nums[idx]*k){
            idx++;
        }
                    curr = max(curr,i-idx+1);
               
       }
        return n-curr;


    }
};