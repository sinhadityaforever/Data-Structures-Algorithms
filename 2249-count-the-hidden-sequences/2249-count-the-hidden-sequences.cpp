class Solution {
public:
    int numberOfArrays(vector<int>& differences, int lower, int upper) {
        long long mini = 1e9;
        long long maxi = -1e9;
        long long curr = 0;
        int n = differences.size();
        for(int i = n-1; i>=0; i--){
            curr-=differences[i];
            mini= min(curr, mini);
            maxi = max(curr, maxi);
        }
        cout<<mini<<" "<<maxi<<endl;
        int ans =0;
        int i = upper;
        while(i+mini >=lower){
            if(i+maxi<=upper && i>=lower && i<=upper)
            ans++;
            i--;
        }
        return ans;
    }
};