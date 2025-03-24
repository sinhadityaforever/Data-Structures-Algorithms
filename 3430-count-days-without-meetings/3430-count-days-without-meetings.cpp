class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        sort(meetings.begin(), meetings.end());
        vector<vector<int>> v;
        for(int i=0; i<meetings.size(); i++){
            
            if(i>0 && meetings[i][0]<=v.back()[1]){
            
                int end = max(meetings[i][1], v.back()[1]);
                v[v.size()-1] = {v.back()[0], end};
                continue;
            
            }
            else{
                v.push_back(meetings[i]);
                continue;
            }
            
            
        }
        int ans =0;
        for(int i=1; i<v.size(); i++){
            cout<<v.size();
            ans+=(v[i][0] - v[i-1][1] - 1);
        }
        int last = v.back()[1];
        int first = v[0][0];
        ans+=(days-last);
        ans+=(first - 1);

        return ans;

    }
};