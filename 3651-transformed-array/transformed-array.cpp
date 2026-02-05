class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n  =nums.size();
        vector<int>baby(n);
        for(int i =0;i<n;i++){
            if(nums[i]>0){
                int k  = i + nums[i];              
                k = k%n;
               baby[i]=nums[k];
            }else if(nums[i]<0){
                // int  k =  n +nums[i]+i;
                // k=k%n;
             int k=abs(nums[i]);
             k=k%n;
             int idx  = i;
             int cnt  = k;
             while(cnt>0){
                idx--;
                cnt--;
                if(idx<0) idx = n-1;
             } 
             baby[i]=nums[idx];

            } else {
                baby[i]=nums[i];
            }
        }
        return baby;
    }
};