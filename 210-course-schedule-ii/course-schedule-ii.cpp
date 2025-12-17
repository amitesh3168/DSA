class Solution {
public:
bool dfs (int node , vector<bool>&vis, vector<bool>&path, stack<int>&st,   vector<vector<int>>&adj){
    vis[node]=1;
    path[node]=1;

    for(auto it : adj[node]){
        if(!vis[it]){
           if(dfs(it,vis,path, st,adj)==true ) return true;
        }
        if(path[it]) return true;
    } 
    st.push(node);
    path[node]=0;
      return false;
}
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {


        vector<vector<int>>adj(numCourses);
        for(auto it :prerequisites){
            adj[it[1]].push_back(it[0]);
        }
  



        vector<bool>vis(numCourses,0);
       vector<bool>path(numCourses,0);

        stack<int>st;
        vector<int> ans;

        for(int i=0;i<numCourses;i++){
            if(!vis[i]){
                if(dfs(i, vis, path, st, adj)==true) return {};
                 
            }
        }
        while(!st.empty()){ 
        int nod = st.top(); 
        st.pop();   
        ans.push_back(nod);
        }
        return ans;
    }
};