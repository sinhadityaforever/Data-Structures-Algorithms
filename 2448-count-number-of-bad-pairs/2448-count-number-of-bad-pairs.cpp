class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        long long n = nums.size();
        unordered_map<long long, long long> mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]-i]++;
        }
        long long tmp =0;
        for(auto it: mp){
            tmp+=(it.second*(it.second-1)/2);
        }
        return (n*(n-1)/2)-tmp;
    }
};