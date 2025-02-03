class Solution {
public:

    int solve(vector<int> &nums){
        int maxi = -1e9;
        for(int i=0; i<nums.size(); i++){
            int curr = nums[i];
            int count =1;
            for(int j=i+1; j<nums.size(); j++){
                if(nums[j]>curr){
                    curr=nums[j];
                    count++;
                }
                else {
                    maxi = max(maxi, count);
                    break;
                }
            }
            maxi=max(count, maxi);
        }
        return maxi;
    }
    int longestMonotonicSubarray(vector<int>& nums) {
        
        int tmp1 = solve(nums);
        reverse(nums.begin(), nums.end());
        int tmp2 = solve(nums);
        return max(tmp1, tmp2);
    }
};