class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int n = nums.size();
        int maxi =0;
        int curr=nums[0];
        for(int i=1; i<n; i++){
            // int c
            if(nums[i-1]<nums[i]){
                curr+=nums[i];
            }
            else{
                maxi=max(maxi, curr);
                curr=nums[i];
            }
        }

        maxi = max(maxi, curr);
        return maxi;
    }
};