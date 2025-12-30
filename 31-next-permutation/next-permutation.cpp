class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int b=-1;
        for(int i=nums.size()-1;i>0;i--){
            if(nums[i]>nums[i-1]){
                b=i-1;
                break;
            }   
                 }
        int swapi=b;
        if(b!=-1)   {
        for(int i=nums.size()-1;i>=b+1;i--){
            if(nums[i]>nums[b]){
                swapi=i;
                break;
            }
        }
        swap(nums[b],nums[swapi]);
        
        }
        reverse(nums.begin()+b+1, nums.end());
    }
};