class Solution {
    public int[][] mergeArrays(int[][] nums1, int[][] nums2) {

       int a  = nums1.length;
       int b= nums2.length;
        int s1 = 0;
        int s2 =0;
        List<int[]> curr = new ArrayList<>();
       while(s1<a && s2<b){
            if(nums1[s1][0]==nums2[s2][0]){
                curr.add(new int[]{nums1[s1][0], nums1[s1][1]+nums2[s2][1]});
                s1++; s2++;
            }else if(nums1[s1][0]>nums2[s2][0]){
                curr.add(new int[]{nums2[s2][0], nums2[s2][1]});
                s2++;
            }else{
                curr.add(new int[]{nums1[s1][0], nums1[s1][1]});
                s1++;
            }
       }

       while(s1<a){
        curr.add(new int[]{nums1[s1][0], nums1[s1][1]});
                s1++;
       }
       while(s2<b){
       
                curr.add(new int[]{nums2[s2][0], nums2[s2][1]});
                s2++;
       }
       int[][] arr = new int[curr.size()][2];

       for(int i=0;i<curr.size();i++){
        arr[i]=curr.get(i);
       }
       return arr;

}}