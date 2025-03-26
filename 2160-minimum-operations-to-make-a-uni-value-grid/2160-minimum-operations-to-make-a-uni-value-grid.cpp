class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int> v;
        for(auto it: grid){
            for(auto j: it) v.push_back(j);
        }
        sort(v.begin(), v.end());
        int n = v.size();
        int mid = v[n/2];
        int ans =0;
        for(auto it: v){
            int a = abs(it-mid);
            int b = a/x;
            int c = a%x;
            if(c>0) return -1;
            ans+=b;
        }
        return ans;
    }
};