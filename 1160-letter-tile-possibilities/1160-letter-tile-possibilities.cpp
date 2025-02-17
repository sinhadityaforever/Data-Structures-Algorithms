class Solution {
public:

    int solve(vector<int> &vis){
        int tmp =0;
        for(int i=0; i<26; i++){
            if(vis[i]>0){
                tmp++;
                vis[i]--;
                tmp+=solve(vis);
                vis[i]++;
            }
        }
        return tmp;
    }
    int numTilePossibilities(string tiles) {
        vector<int> vis(26, 0);
        for(auto it: tiles){
            vis[it-'A']++;
        }
        return solve(vis);
    }
};