class Solution {
public:

    int dfs(vector<vector<int>> &grid, int id, int r, int c, int m, int n){
        if(r>=m || r<0 || c>=n || c<0 || grid[r][c]!=1){
            return 0;
        }
        grid[r][c] = id;
        int dRow[] = {0,1,0,-1};
        int dCol[] = {-1, 0, 1, 0};
        int sum =0;
        for(int i=0; i<4; i++){
            sum+=dfs(grid, id, r+dRow[i], c+dCol[i], m, n);
        }
        return 1+sum;
    }
    int largestIsland(vector<vector<int>>& grid) {
        unordered_map<int, int> mp;
        int m = grid.size();
        int n = grid[0].size();
        int id=2;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]==1){
                    int size = dfs(grid, id, i, j, m, n);
                    mp[id]=size;
                    id++;
                }
            }
        }

        if(mp.size()==0) return 1;
        int maxi=-1e9;
        for(auto it: mp){
            maxi=max(maxi, it.second);
        }
        int dRow[]={1,0,-1,0};
        int dCol[]={0,1,0,-1};
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]==0){
                    int size = 1;
                    set<int> ids;
                    for(int k=0; k<4; k++){
                        int nRow = i+dRow[k];
                        int nCol = j+dCol[k];
                        if(nRow<m && nRow>=0 && nCol<n && nCol>=0){
                            ids.insert(grid[nRow][nCol]);
                        }
                    }
                    for(auto id: ids){
                        size+=mp[id];
                    }
                    maxi = max(maxi, size);
                }
            }
        }
        return maxi;

    }
};