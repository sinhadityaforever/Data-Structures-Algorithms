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
        vector<long long> dp(n+1, 0);

        dp[n] =0;

        for(int i=n-1; i>=0; i--){
            long long pick =questions[i][0];
            if(i+questions[i][1]+1<n)
            pick +=dp[i+questions[i][1]+1];
            long long notPick = dp[i+1];
            dp[i] = max(pick, notPick);
        }
        // return solve(questions, 0, n, dp);
        return dp[0];
    }
};