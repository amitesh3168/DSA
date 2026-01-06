class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
     sort(nums.begin(),nums.end());
     int n= nums.size();
     int closest = nums[0]+nums[1]+nums[2];
     for(int i=0;i<n-1;i++){
        int s= i+1;
        int e = n-1;
        while(s<e){
            int sum = nums[i]+nums[s]+nums[e];
              if (abs(sum - target) < abs(closest - target)) {
                    closest = sum;
                }
            if(sum>target){
                e--;
            }else{
                s++;
            
        }
     }
     }
     return closest;
    }
};