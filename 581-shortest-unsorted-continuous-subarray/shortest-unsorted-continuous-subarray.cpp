class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) { 
        int n = nums.size();
        int e = -1;
        int s = -1;
        int maxi =nums[0];
        for(int i = 1; i<n ; i++){
            if(nums[i]<maxi){
                e =i;
            } else{
                maxi = nums[i];
            }  

        }

        int mini =nums[n-1];
        for(int i = n-2; i >= 0 ; i--){

            if(nums[i]>mini){
                s = i;
            } else{
                mini =nums[i];
            }  
            
        }
       if(s==-1) return 0;
        
     //  if(s==INT_MIN||e==INT_MAX) return 0;
       return e-s+1;
    }
};