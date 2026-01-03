class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n= nums.size();
    int freq = n/2;
    unordered_map<int, int>mp;
    for(auto it: nums){
        mp[it]++;
         if(mp[it] == freq){
            return it;
        }
    }
    // for(auto it:nums){
    //     if(mp[it] == freq){
    //         return it;
    //     }
    // }
     return -1;




  }
};