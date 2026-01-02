class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        set<int>noequal;
        unordered_map<int,int>mp;
        for(auto it:nums1){
            mp[it]++;

        }
        for(auto it: nums2){
            if(mp[it]>=1){
                noequal.insert(it);
            }
        }
       vector<int>an(noequal.begin(),noequal.end());
        return an;
    }
};