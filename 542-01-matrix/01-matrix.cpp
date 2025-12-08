class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n = mat.size();
        int m  = mat[0].size();
        queue<pair<pair<int,int>, int>>q;
        vector<vector<bool>> visited(n, vector<bool>(m));
        vector<vector<int>>distance(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j =0;j<m;j++){
                if(mat[i][j]==0){
                    q.push({{i,j},0});
                    visited[i][j]=1;
                }
            }
        }
        int er[] = {1,-1,0,0};
        int ec[] ={0,0,1,-1};
        while(!q.empty()){
            auto [p,d] = q.front();
            auto [x,y] =p;
            q.pop();
            distance[x][y]=d;
            for(int k=0;k<4;k++){
                int x1 = x+er[k];
                int y1 = y + ec[k];
               if(x1>=0&&y1>=0&&x1<n&&y1<m) {
                if(!visited[x1][y1]){
                    visited[x1][y1] =1;
                    q.push({{x1,y1},d+1});

                }
                }
            }

        }
        return distance;
    }
};