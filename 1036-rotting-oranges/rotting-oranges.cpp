class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
    
        queue<pair<pair<int, int>,int>>q;
        for(int i=0;i<n;i++){
            for(int j =0;j<m;j++){{
                if(grid[i][j]==2){
                    q.push({{i,j},0});
                }   
               
            }
            }
             }
        int er[] = { -1, 0, 1, 0};
        int ec[] = { 0, -1, 0, 1};
        int time = 0;
        while(!q.empty()){
            
            int r = q.front().first.first;
            int c = q.front().first.second;
            int t = q.front().second;
            q.pop();
            time = max(t,time);
            for(int i=0;i<4;i++){
                int x  = r+er[i];
                int y = c+ec[i];
                if(x>=0&&y>=0&&x<n&&y<m&&grid[x][y]==1) {
                 grid[x][y]=2;
              
                 q.push({{x,y},t+1});
               
}
            }

        }
        for(int i =0;i<n;i++){
            for(int j =0;j<m;j++){
                if(grid[i][j]==1){ return -1;}
            }
        }
        return time;

    }
};