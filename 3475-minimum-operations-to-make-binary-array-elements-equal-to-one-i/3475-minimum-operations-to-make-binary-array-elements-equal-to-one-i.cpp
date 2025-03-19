class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int ans=0;
        for(int i=0; i<=n-3; i++){
            if(nums[i]==0){
                ans++;
                nums[i]=!nums[i];
                nums[i+1]=!nums[i+1];
                nums[i+2]=!nums[i+2];
            }
        }
        
        for(auto it: nums){
            if(it==0) return -1;
            // cout<<it<<endl;
        }
        return ans;
    }
};