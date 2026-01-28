class Solution {
public:
    bool checksort(vector<int>&v){
        for(int i =1;i<v.size();i++){
            if(v[i]<v[i-1]){
                return false;
            }
        }
        return true;
    }
    int minimumPairRemoval(vector<int>& nums) {
        int n   = nums.size();
        vector<int>v(nums.begin(), nums.end());
        int ops = 0;
        while(checksort(v)==false){
            ops++;
            vector<int>temp;
            int s=0;
            int e=0 ;
            int sum=0 ;
             int mini = INT_MAX;

             for(int i =0;i<v.size()-1;i++){
                sum =  v[i]+v[i+1];
                if(sum <mini){
                    mini  = sum;
                    s=i;
                    e=i+1;

                }
             }
             for(int i =0;i<v.size();i++){
                if(i==s){
                    temp.push_back(mini);
                }else if(i==e) continue;
                else
                     temp.push_back(v[i]);
             }
             v=temp;
        }
        return ops;
    }
};