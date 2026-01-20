class Solution {
public:
    int row[4] = {-1, 1, 0, 0};
    int col[4] = {0, 0, -1, 1};

    bool valid(int i, int j, int m, int n) {
        return i >= 0 && i < m && j >= 0 && j < n;
    }

    void solve(vector<vector<char>>& board) {
        int m = board.size();
        int n = board[0].size();

        queue<pair<int,int>> q;

       
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(i == 0 || i == m-1 || j == 0 || j == n-1) {
                    if(board[i][j] == 'O') {
                        q.push({i, j});
                        board[i][j] = '#';  
                    }
                }
            }
        }

      
        while(!q.empty()) {
            int r = q.front().first;
            int c = q.front().second;
            q.pop();

            for(int k = 0; k < 4; k++) {
                int nr = r + row[k];
                int nc = c + col[k];

                if(valid(nr, nc, m, n) && board[nr][nc] == 'O') {
                    board[nr][nc] = '#';
                    q.push({nr, nc});
                }
            }
        }

       
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(board[i][j] == 'O')
                    board[i][j] = 'X';
                else if(board[i][j] == '#')
                    board[i][j] = 'O';
            }
        }
    }
};
