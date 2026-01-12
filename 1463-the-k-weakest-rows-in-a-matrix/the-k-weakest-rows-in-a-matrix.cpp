class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int m = mat.size();
        int n =mat[0].size();
      vector<pair<int, int>>uttar;
      vector<int> vic(k);
      
        for(int i=0;i<m;i++){
            int maionehu =0 ;
            for(int j=0;j<n;j++){
                if(mat[i][j]==1){
                    maionehu++;
                }
            }
           uttar.push_back({maionehu,i});
        }
        sort(uttar.begin(),uttar.end());
        for(int i=0;i<k;i++){
            vic[i]=uttar[i].second;
        }
        return vic;

    }
};