class Solution {
public:
    int minimumTime(int n, vector<vector<int>>& relations, vector<int>& time) {
        vector<int>prev(n,0);
        vector<int>indegree(n,0);
        vector<vector<int>>adj(n);
        for(int i=0;i<relations.size();i++){
            adj[relations[i][0]-1].push_back(relations[i][1]-1);
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<adj[i].size();j++){
                indegree[adj[i][j]]++;
            }
        }
        queue<int>q;
        for(int i=0;i<n;i++){
            if(!indegree[i]){
                q.push(i);
            }
        }
        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(int j=0;j<adj[node].size();j++){
                indegree[adj[node][j]]--;
                if(!indegree[adj[node][j]])
                q.push(adj[node][j]);
                prev[adj[node][j]]=max(prev[adj[node][j]],time[node]+prev[node]);
            }
            

        }
        int ans=0;
        for(int i=0;i<n;i++){
            ans=max(ans,prev[i]+time[i]);
        }
        return ans;
        
    }
};