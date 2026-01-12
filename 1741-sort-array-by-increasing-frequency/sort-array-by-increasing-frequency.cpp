class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto it:nums){
            mp[it]++;
        }
        priority_queue<pair<int, int>, vector<pair<int,int>>, greater<pair<int,int>>>pq;
        for(auto it:mp){
            pq.push({it.second, -it.first});
        }
        vector<int>ans;
        while(!pq.empty()){
            auto [p ,q]=pq.top();
            int d  = -q;
            pq.pop();
            while(p!=0){
                ans.push_back(d);
                p--;
            }
        }
        return ans;
    }
};