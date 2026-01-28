class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        queue<int>q;
        vector<bool>visited(n,0);
        vector<vector<int>>adj(n);
        if(n==1)
        return true;
        for(int i=0;i<edges.size();i++){
            int u=edges[i][0];
            int v=edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        q.push(source);
        visited[source]=1;
        while(!q.empty()){
            int node=q.front();
            visited[node]=1;
            q.pop();
            for(int j=0;j<adj[node].size();j++){
                if(adj[node][j]==destination)
                return true;
                else if (!visited[adj[node][j]]){
                    visited[adj[node][j]]=1;
                    q.push(adj[node][j]);

                }
            }

    }
    return false ;
        
    }
};