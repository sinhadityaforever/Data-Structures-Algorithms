class Solution {
public:
    int numberOfArrays(vector<int>& differences, int lower, int upper) {
        long long mini = 0;
        long long maxi = 0;
        long long curr = 0;
        int n = differences.size();
        int ans =0;
        for(int i =0; i<n; i++){
            curr+=differences[i];
            mini= min(curr, mini);
            maxi = max(curr, maxi);
            if(upper-lower<maxi-mini) return 0;
        }
        return (upper-lower) - (maxi-mini)+1;
        
        return ans;
    }
};