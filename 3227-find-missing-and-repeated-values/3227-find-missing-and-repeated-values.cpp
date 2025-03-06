class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        
        long long n = grid[0].size();
        n= n*n;
        long long fsq = n*(n+1)*(2*n+1)/6;
        long long fsm = n*(n+1)/2;
        long long sq=0;
        long long sm=0;
        for(auto it: grid){
            for(auto i: it){
                sq+=i*i;
                sm+=i;
            }
        }
        long long difsq = sq - fsq;
        long long diff = sm - fsm;
        long long plus = difsq/diff;
        int repeat = (difsq/diff + diff)/2;
        int missing = (difsq/diff - diff)/2;
        return {repeat, missing};
    }
};