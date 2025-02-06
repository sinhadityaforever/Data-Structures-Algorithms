class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        unordered_map<long long, long long> mp;
        int ans =0;
        for(int i=0; i<nums.size(); i++){
            // long long product =
            for(int j=i+1;j<nums.size(); j++){
                long long product = nums[i]*nums[j];
                ans+=mp[product]*8;
                mp[product]++;
            }
        }
       
        return ans;
    }
};