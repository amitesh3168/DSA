class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int n =  nums.size();
        int ans = 0;
       for(int i = 0 ;i<n;i++){
        unordered_set<int>st;
        unordered_set<int>st1;
        for(int j = i;j<n;j++){
            if(nums[j]%2==0) {
            st.insert(nums[j]);
            }
            else {
                st1.insert(nums[j]);
            }
         if(st.size()==st1.size())   ans = max(ans , j-i+1);
        }


       }
       return ans;


    }
};