class Solution {
public:
 int findMin(vector<int>& nums) {
        int s =0;
        int e = nums.size()-1;
        while(s<e){
            int mid = s+(e-s)/2;
            if(nums[mid]>nums[e]){
                s=mid+1;
            }else{
                e=mid;
            }
        }
        return s;
    }

    int bs(int s, int e, vector<int>& nums, int target){
    while(s<=e){
         int mid = s+(e-s)/2;

         if(nums[mid]==target){
            return mid;
         }
         if(nums[mid]>target){
            e=mid-1;
         }else{
            s=mid+1;
         }
   }
    return -1;
    }



    int search(vector<int>& nums, int target) {
        int n =  nums.size();
        int idx= findMin(nums);
int s, e;
        if(target>=nums[idx]&&target<=nums[n-1]){  
            s=idx; e=n-1;
        }else{
            s=0; e=idx-1;
        }
        return bs(s,e,nums,target);

    }
};