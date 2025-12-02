class Solution {
public:
    void dfs(vector<vector<int>>& isConnected, vector<bool>& vis, int st, int n){
        vis[st]=1;
        for(int i= 0;i<n;i++){
            if(!vis[i] && isConnected[st][i]==1){
                dfs(isConnected, vis, i, n);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n  = isConnected.size();
        vector<bool>vis(n, 0);
        int count =0;
        
        for(int i=0; i<n; i++){
            if(!vis[i]){
                count++;
                dfs(isConnected, vis, i, n );
            }
        }
return count;
    }
};