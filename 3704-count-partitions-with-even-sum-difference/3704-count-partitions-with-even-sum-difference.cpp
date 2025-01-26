class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int sum = 0;
        for(auto it: nums) sum+=it;
        int lSum=0;
        int ans=0;
        for(int i=0; i<nums.size()-1; i++){
            sum-=nums[i];
            lSum+=nums[i];
            if((sum%2==0 && lSum%2==0) ||( sum%2==1 && lSum%2==1)) ans++;
        }
        return ans;
    } 
};