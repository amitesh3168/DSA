class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int l=0;
        for(int i=0;i<nums.size();i++){
             if(nums[i]<=pivot) l++;
        }
      //  int mid = l;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot){
                l--;
                ans.push_back(nums[i]);
            }
        }
        while(l){
            ans.push_back(pivot);
            l--;
        }
         for(int i=0;i<nums.size();i++){
            if(nums[i]>pivot){
                
                ans.push_back(nums[i]);
            }
        }
        return ans;





    }
};