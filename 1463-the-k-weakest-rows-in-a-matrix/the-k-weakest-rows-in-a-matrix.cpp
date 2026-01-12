class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
           int m = mat.size();
        int n =mat[0].size();
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> yepqhai;
             for(int i=0;i<m;i++){
            int maionehu =0 ;
            for(int j=0;j<n;j++){
                if(mat[i][j]==1){
                    maionehu++;
                }
            }
           yepqhai.push({maionehu,i});
          }
            vector<int>yhiuttarhai;
        while(yepqhai.size()> m-k){
            yhiuttarhai.push_back(yepqhai.top().second);
            yepqhai.pop();
        }
         return yhiuttarhai;
    }
};