class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>adj(numCourses);
        vector<int>indegree(numCourses,0);
        queue<int>q;
        vector<int>ans;
        for(int i=0;i<prerequisites.size();i++){
            int course = prerequisites[i][0];
            int pre = prerequisites[i][1];
            adj[pre].push_back(course);
            indegree[course]++;
        }
        
    
        for(int i=0;i<numCourses;i++){
            if(!indegree[i]){
                q.push(i);
            }
        }
        while(!q.empty()){
            int node=q.front();
            q.pop();
            ans.push_back(node);
            
            for(int j=0;j<adj[node].size();j++){
                {
                    indegree[adj[node][j]]--;
                    if(indegree[adj[node][j]]==0){
                        q.push(adj[node][j]);
                    }
                }
            }
        }
    if (ans.size() == numCourses)
    return ans;
    return {};
    }
        
       
};
