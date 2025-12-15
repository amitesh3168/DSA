class Solution {
public:
bool check(int s, vector<vector<int>>& graph, vector<int> v ){
        queue<int>q;
        q.push(s);
        v[s]=1;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            for(int it:graph[node]){
                if(v[it]==-1){
                    v[it]=!v[node];
                    q.push(it);
                }else if(v[it]==v[node]){
                    return 0;
                }
            }
        }
        return 1;
}

bool isBipartite(vector<vector<int>>& graph) {
        vector<int> v(graph.size());
        for(int i=0;i<graph.size();i++){
            v[i]=-1;
        }
        for(int i=0;i<graph.size();i++){
            if(v[i]==-1){
                if (check(i,graph,v)==false) return false;
            }
        }
        return true;
        
    }
};