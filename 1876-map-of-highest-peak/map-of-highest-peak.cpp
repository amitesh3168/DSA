class Solution {
public:

    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
        int m = isWater.size();
        int n = isWater[0].size();
        queue<pair<pair<int,int>, int>>q;
        vector<vector<int>> height(m, vector<int>(n));
        vector<vector<bool>>visited(m, vector<bool>(n));
        for(int i  = 0;i<m;i++){
            for(int j =0;j<n;j++){
                if(isWater[i][j]==1 ){
                    q.push({{i,j},0});
                    visited[i][j]=1;
                }
            }
        }
        int er[] ={0,0,1,-1};
        int ec[]={-1,1,0,0};
        while(!q.empty()){
            auto[x, t]=q.front();
            
            auto[i, j]= x;
            q.pop(); 
            height[i][j]=t;
            for(int k = 0;k<4;k++){
                int x = i+er[k];
                int y = j+ec[k];
                if(x>=0&&y>=0&&x<m&&y<n){
                   if(!visited[x][y]){
                     visited[x][y]=1;
                    q.push({{x,y},t+1});
                    }
                }
            }
        }
        
        return height;
     }
};