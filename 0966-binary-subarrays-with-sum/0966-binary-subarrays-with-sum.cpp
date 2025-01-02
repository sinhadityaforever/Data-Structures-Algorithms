class Solution {
public:
    int atMost(vector<int>& nums, int goal){
        int l=0;
        int r=0;
        int sum=0;
        int n= nums.size();
        int ans=0;
        while(r<n){
            sum+=nums[r];
            while(sum>goal && l<=r){
                sum-=nums[l];
                l++;
            }
            ans+=r-l+1;
            r++;
        }
        return ans;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
       return atMost(nums, goal) - atMost(nums, goal-1);
        
    }
};