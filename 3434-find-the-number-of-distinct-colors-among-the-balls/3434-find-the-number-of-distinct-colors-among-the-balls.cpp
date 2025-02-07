class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        unordered_map<int, int> colors;
        unordered_map<int, int> balls;
        vector<int> ans;

        for(int i=0; i<queries.size(); i++){
            int ball = queries[i][0];
            int color = queries[i][1];
            if(balls.find(ball)==balls.end()){
                balls[ball] = color;
                colors[color]++;
                ans.push_back(colors.size());
            }
            else{
                int prevC = balls[ball];
                balls[ball] = color;
                colors[color]++;
                colors[prevC]--;
                if(colors[prevC]==0) colors.erase(prevC);
                ans.push_back(colors.size());
                
            }

        }
        return ans;
    }
};