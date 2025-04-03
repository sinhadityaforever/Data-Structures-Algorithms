class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size();
        vector<long long> lMax(n, 0);
        vector<long long> rMax(n, 0);
        for(int i=1; i<n; i++){
            if(nums[i-1]>lMax[i-1]) lMax[i]=nums[i-1];
            else lMax[i] = lMax[i-1];
        }
        for(int i = n-2; i>=0; i--){
            if(nums[i+1]>rMax[i+1]) rMax[i] = nums[i+1];
            else rMax[i] = rMax[i+1];
        }
        long long ans =0;
        for(int i=0; i<n; i++){
            long long res = (lMax[i]-nums[i])*rMax[i];
            if(res>ans) ans =res;
        }
        return ans;
    }
};