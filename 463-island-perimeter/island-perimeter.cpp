class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int count = 0;
        int n = grid.size();
        int m = grid[0].size();
    
        int er[] ={1,-1,0,0};
        int ec[] ={0,0,-1,1};
        bool found=false;
        queue<pair<int, int>>q;
            for (int i=0;i<n&&!found;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1) {
                    q.push({i,j});
                    grid[i][j]=-1;
                    found=true;
                    break;

                }
               
            }
        }
        if(!found) return 0;
        while(!q.empty()){
            int r =q.front().first;
            int c = q.front().second;
            q.pop();
           
            int t =0;
            for(int i=0;i<4;i++){
                int x = r+er[i];
                int y = c+ec[i];
                if(x>=n||y>=m||x<0||y<0){
                    t++;
                   
                }else if (grid[x][y]==0) t++;
                
               else if(grid[x][y]==1) {
                    q.push({x,y});
                   grid[x][y]=-1; 
                    }
               

            }
            count = count + t;
        }
        return count;

    }
};