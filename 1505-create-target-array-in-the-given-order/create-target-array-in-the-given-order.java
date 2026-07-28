class Solution {
    public int[] createTargetArray(int[] nums, int[] index) {
        int n = nums.length;
        ArrayList<Integer> temp = new ArrayList<>(n);
          
        for(int i=0;i<n;i++){
            
            temp.add(index[i], nums[i]);

        }
        int[] arr = new int[temp.size()];

        for(int i=0;i<temp.size();i++){
            arr[i] =temp.get(i);
        }
        return arr;
    }
}