class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        unordered_map<int, int> mp;
        int maj=0;
        int n = nums.size();
        for(auto it: nums){
            mp[it]++;
        }
        for(auto it: mp){
            if(it.second*2>n) maj=it.first;
        }
        int l =0;
        int r = mp[maj];
        for(int i=0; i<n-1; i++){
            if(nums[i]==maj){
                l++;
                r--;
                if(2*l>(i+1) && 2*r>(n-i-1)){
                    return i;
                }
            }
            else continue;
        }
        return -1;

    }
};