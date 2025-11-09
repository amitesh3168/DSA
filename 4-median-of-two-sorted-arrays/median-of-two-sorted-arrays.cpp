class Solution {
public:
void merge(vector<int>& ans,vector<int>& nums1, vector<int>& nums2, int m , int n){
    int i = m-1;
    int j = n-1;
    int idx = m+n-1;
    while(i>=0 && j>=0){
        if(nums1[i]>nums2[j]){
            ans[idx]=nums1[i];
            idx--;
            i--;
        }else{
            ans[idx]=nums2[j];
            idx--;
            j--;
        }

    }
    while(i>=0){
        ans[idx]=nums1[i];
            idx--;
            i--;
    }
    while(j>=0){
        ans[idx]=nums2[j];
            idx--;
        j--;
    }

return;
}
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m =  nums1.size();
        int n = nums2.size();
        vector<int> ans(n+m);
        double res;
        merge(ans , nums1, nums2, m,n);
        
      int len = m+n;
      int mid = len/2;

         if(len%2==1){
            res= ans[mid];
            return res;
         }
         return (ans[mid-1]+ans[mid])/2.0;
          

        
    }
};