class Solution {
public:
    int m;
    int n;
    int row[4]={-1,1,0,0};
    int col[4]={0,0,-1,1};
    int island=0;
    bool valid(int i,int j){
        return i>=0&&i<m &&j>=0&&j<n;
    }
    int numIslands(vector<vector<char>>& grid) {
        queue<pair<int,int>>q;
        m=grid.size();
        n=grid[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1'){
                    island ++;
                    q.push({i,j});
                    grid[i][j]='0';

                while(!q.empty()){
                int r=q.front().first;
                int c=q.front().second;
                q.pop();
                
                for(int k=0;k<4;k++){
                    if(valid(r+row[k],c+col[k]) && grid[r+row[k]][c+col[k]]=='1'){
                        
                        q.push({r+row[k],c+col[k]});
                        grid[r+row[k]][c+col[k]]='0';
                    }
                }
            }
            }
            }
        }
         return island;
    }
    
       
};