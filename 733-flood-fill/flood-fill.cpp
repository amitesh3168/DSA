class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n = image.size();
        int m = image[0].size();
    
        queue<pair<int, int>>q;
        q.push({sr,sc});
        int er[] = { -1, 0, 1, 0};
        int ec[] = { 0, -1, 0, 1};
         int oldColor = image[sr][sc];
      if(image[sr][sc]==color) return image;
      image[sr][sc]= color;
        while(!q.empty()){
            
            int r = q.front().first;
            int c = q.front().second;

            q.pop();
           
            for(int i=0;i<4;i++){
                int x  = r+er[i];
                int y = c+ec[i];
                if(x>=0 && y>=0 && x<n && y<m && image[x][y]==oldColor) {
                 image[x][y]=color;
                 q.push({x,y});
               
}
            }

        }
        
        return image;

    }
};