class Solution {
public:
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
        int m = isWater.size();
        int n = isWater[0].size();
        vector<vector<int>> ans(m, vector<int>(n, -1));
        queue<pair<int, int>> q;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                
                if(isWater[i][j]){
                    ans[i][j]=0;
                    q.push({i,j});
                }
            }
        }
        int dRow[] = {0,1,0,-1};
        int dCol[] = {1,0,-1,0};
        while(!q.empty()){
            auto top = q.front();
            q.pop();
            int r = top.first;
            int c = top.second;

            int val = ans[r][c];
            for(int i=0; i<4; i++){
                int nRow = r +dRow[i];
                int nCol = c +dCol[i];
                if(nRow>=0 && nRow<m && nCol>=0 && nCol<n && ans[nRow][nCol]==-1){
                    ans[nRow][nCol] = ans[r][c]+1;
                    q.push({nRow, nCol});
                }
            }
            
        }
        return ans;
    }
};