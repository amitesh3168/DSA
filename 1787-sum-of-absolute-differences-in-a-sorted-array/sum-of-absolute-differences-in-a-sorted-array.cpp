class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {

        int n = nums.size();

        vector<int> ans;

        int sum = 0;

      vector<int> ps(n , 0);

      ps[0] = nums[0];

      for(int i =  1 ; i < n ; i++){

        ps[i] = nums[i] + ps[i-1];
      }



      for(int i = 0 ; i < n ; i++){

        int ls = 0;

        if(i > 0){
            ls = nums[i]*i - ps[i-1];
        }

        int rs = 0;

        if(i < n -1){

            rs = ps[n-1] - ps[i] - nums[i]*(n - i - 1);
            
        }

        ans.push_back(ls+ rs);
      }
        return ans;
        
    }
};