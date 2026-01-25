class Solution {
public:
    int fxn(int r, int c){
        int t =1;
        for(int i =0;i<c;i++){
            t=t*(r-i);
            t=t/(i+1);
        }
        return t;


    }
   
    vector<vector<int>> generate(int numRows) {
         vector<vector<int>>ans;
        for(int i =1;i<=numRows;i++){
            vector<int>v;
            for(int j=1;j<=i;j++){
                v.push_back(fxn(i-1, j-1));
            }
            ans.push_back(v);
        }

return ans;
    }
};