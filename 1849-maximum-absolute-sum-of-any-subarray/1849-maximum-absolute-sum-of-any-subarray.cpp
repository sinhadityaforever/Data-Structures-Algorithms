class Solution {
public:

    int kadane(vector<int> &nums){
        int currSum=0;
        int maxSum=0;
        for(auto it: nums){
            currSum+=it;
            if(currSum<0) currSum=0;
            maxSum = max(maxSum, currSum);
        }
        return maxSum;
    }
    int maxAbsoluteSum(vector<int>& nums) {
        int maxi = kadane(nums);
        for(int i=0; i<nums.size(); i++){
            nums[i]=nums[i]*(-1);
        }
        int mini = kadane(nums);
        return max(maxi, mini);
    }
};