class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int sum =0;
        for(auto it:apple){
            sum+=it;
        }
        sort(capacity.begin(),capacity.end());
        int n= capacity.size();
        int idx=0;
        for(int i=n-1;i>=0;i--){
            sum-=capacity[i];  
            idx++;
            if(sum<=0) break;
        }
        return idx;
    }
};