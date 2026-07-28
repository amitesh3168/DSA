class Solution {
    public int[] shuffle(int[] nums, int n) {
        
        int i = 0;
        int j = n;
        int idx = 0;
        int[]  ans  = new int[2*n];
        while(i<n && j<(2*n) ){
            ans[idx] = nums[i];
            i++;
            idx++;
            ans[idx]=nums[j];
            idx++;
            j++;
        }
        return ans;
    }
}