class Solution {
public:
    bool dfs(int node, vector<bool>&vis, vector<bool>&path, vector<bool>&check, vector<vector<int>>& graph ){
        vis[node]=1;
        path[node]=1;
        check[node]=0;
        for(auto it: graph[node]){
            if(!vis[it]){
                if(dfs(it,vis,path,check,graph)==true){
                    check[node]=0;
                    return true;
                }
            }
           else if(path[it]){
                  check[node]=0;
                    return true;
           }
        }
        path[node]=0;
        check[node]=1;
        return false;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<bool>vis(n,0);
        vector<bool>path(n,0);
        vector<bool>check(n,0);
        vector<int> ans;

        for(int i=0;i<n;i++){
            if(!vis[i]){
                dfs(i,vis,path,check,graph);
            }
        }
        for(int i=0;i<n;i++){
            if(check[i]==1) ans.push_back(i);
        }
        return ans;
    }
}; 