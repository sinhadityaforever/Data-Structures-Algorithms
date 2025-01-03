class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        vector<long long> pre;
        
        int n = nums.size();
        vector<long long> suf(n, 0);
        long long currSum=0;
        for(int i=0; i<n; i++){
            currSum+=nums[i];
            pre.push_back(currSum);
        }
        currSum=0;
        for(int i=n-1; i>=0; i--){
            currSum+=nums[i];
            suf[i]=currSum;
        }
        int ans=0;
        for(int i=0; i<n-1; i++){
            if(pre[i]>=suf[i+1]) ans++;
        }
        return ans;

    }
};