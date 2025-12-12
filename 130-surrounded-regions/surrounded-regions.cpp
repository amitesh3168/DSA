class Solution {
public: 

void dfs(int x, int  y, vector<vector<char>>& board, vector<vector<bool>>&visited,int er[], int ec[],int m, int n){
visited[x][y] = 1;
for(int k = 0;k<4;k++){
    int i = x + er[k];
    int j  = y  + ec[k];
    if(i>=0&&j>=0&&i<m&&j<n&&!visited[i][j]){  
            if(board[i][j]=='O'){
           dfs(i,j,board,visited,er,ec,m,n);
    }
    }
}
}  void solve(vector<vector<char>>& board) {
         int m = board.size();
         int n = board[0].size();
         if(m<3 ||n<3) return ;
         vector<vector<bool>>visited(m, vector<bool>(n,0));
            int er[] ={1,-1,0,0};
            int ec[] ={0,0, -1,1};
        for(int i =0;i<m;i++){
            if(board[i][0]=='O') dfs(i,0,board, visited,er,ec, m, n);
             if(board[i][n-1]=='O') dfs(i,n-1,board, visited,er,ec,m,n);
        }
        for(int i =0;i<n;i++){
            if(board[0][i]=='O') dfs(0,i,board, visited,er,ec, m,n);
             if(board[m-1][i]=='O') dfs(m-1,i,board, visited,er,ec, m, n);
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if (!visited[i][j] && board[i][j]=='O'){
                    board[i][j]='X';
                }
            }
        }
return;

    }
};