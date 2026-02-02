class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n =  grid.size();
        vector<int>v(n*n,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int c = grid[i][j] -1;
                v[c]++;
            }
        }
        int a ;
        int b ; 

        for(int i=0;i<v.size();i++){
            if(v[i]==0) b =i+1;
            if(v[i]==2) a  = i+1;
        }
        return {a,b};
    }
};