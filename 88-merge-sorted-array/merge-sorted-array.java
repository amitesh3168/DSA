class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int l = m+n-1;
        if(n==0) return ;
       int f = m-1;
       int s = n-1;

        while(l>=0 && s>=0 && f>=0){
            if(nums1[f]>nums2[s]){
                nums1[l--]=nums1[f--];
            }else{
                nums1[l--]=nums2[s--];
            }
        }
        while(f>=0){
            nums1[l--]=nums1[f--];

        }
        while(s>=0){
            nums1[l--]= nums2[s--];
        }

    return;
    }
}