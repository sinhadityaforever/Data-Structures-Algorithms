class Solution {
public:

    long long solve(vector<vector<int>> &q, int index, int n, vector<long long> &dp){
        if(index>=n) return 0;
        if(dp[index]!=-1) return dp[index];
        long long pick =0;
        long long notPick =0;
        pick = q[index][0] + solve(q, index+q[index][1]+1, n, dp);
        notPick = solve(q, index+1, n, dp);
        return dp[index] = max(pick, notPick);
    }
    long long mostPoints(vector<vector<int>>& questions) {
        int n = questions.size();
        vector<long long> dp(n+1, -1);
        return solve(questions, 0, n, dp);
    }
};