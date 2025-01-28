class Solution {
public:

    int solve(vector<vector<int>> &grid, vector<vector<int>> &vis, int r, int c, int m, int n){
        if(r>=m || r<0 || c>=n || c<0 || vis[r][c]==1 || grid[r][c]==0) return 0;
        int dRow[] = {1,0,-1,0};
        int dCol[]= {0, -1, 0, 1};
        int maxi = 0;
        vis[r][c]=1;
        for(int i=0; i<4; i++){
            
            int tmp = solve(grid, vis, r+dRow[i],c+dCol[i],m,n);
            maxi+=tmp;
        }
        return grid[r][c] + maxi;
    }
    int findMaxFish(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        queue<pair<int, int>> q;
        int maxi =0;
        vector<vector<int>> vis(m, vector<int>(n, 0));
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]!=0){
                    int tmp = solve(grid, vis, i, j, m, n);
                    maxi = max(maxi, tmp);
                }
            }
        }
        return maxi;
    }
};