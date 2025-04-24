class Solution {
public:
    int atmostK(vector<int>& nums, int k){
        if(k==0) return 0;
        int l=0;
        int r=0;
        unordered_map<int, int> mp;
        int ans =0;
        while(r<nums.size()){
            mp[nums[r]]++;
            while(l<r && mp.size()>k){
                mp[nums[l]]--;
                if(mp[nums[l]]==0) mp.erase(nums[l]);
                l++;
            }
            ans += (r-l+1);
            r++;
        }
        return ans;
    }
    int countCompleteSubarrays(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(auto it: nums) mp[it]++;
        int k = mp.size();
        return atmostK(nums, k) - atmostK(nums, k-1);

    }
};