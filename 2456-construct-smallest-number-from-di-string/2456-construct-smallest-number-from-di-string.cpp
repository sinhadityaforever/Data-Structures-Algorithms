class Solution {
public:
    void solve(string pattern, int index, string curr, vector<int> vis, string &ans){
        if(curr.size()==pattern.size()+1){
            if(ans.size()==0 || curr<ans) ans=curr;
            return;
        }
        for(int i=1; i<=9; i++){
            if(vis[i]==0){
                if (curr.empty() || 
                    (pattern[index] == 'I' && i > (curr.back() - '0')) || 
                    (pattern[index] == 'D' && i < (curr.back() - '0'))) {
                    
                    curr.push_back(i + '0');
                    vis[i] = 1;
                    solve(pattern, index + 1, curr, vis, ans);
                    curr.pop_back();
                    vis[i] = 0; // Backtrack
                }
            }
            
            
        }
    }
    string smallestNumber(string pattern) {
        string curr;
        vector<int> vis(10, 0);
        string ans;
        for(int i=1; i<=9; i++){
            vis[i]=1;
            curr+=(i+'0');
            solve(pattern, 0, curr, vis, ans);
            curr.pop_back();
            vis[i]=0;
        }
        return ans;
    }
};