class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        
        int n = nums.size();
        vector<long long> suf(n,0);
        for(int i=n-1; i>=0; i--){
            if(i==n-1) suf[i]=nums[i];
            else{
                if(nums[i]>suf[i+1])
                suf[i] = nums[i];
                else suf[i] = suf[i+1];
            }
        }
        long long ans =0;
        for(int i=0; i<n-2; i++){
            for(int j =i+1; j<n-1; j++){
                if(ans< (nums[i]-nums[j])*suf[j+1])
                ans = (nums[i]-nums[j])*suf[j+1];
            }
        }
        return ans;
    }
};