class Solution {
public:
    bool divideArray(vector<int>& nums) {
        if(nums.size()%2==1) return false;
        unordered_map<int, int> mp;
        for(auto it: nums) mp[it]++;
        for(auto it: mp){
            if(it.second%2==1) return false;
        }
        return true;
 
    }
};