class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans=0;
        for(auto it: nums){
            string tmp = to_string(it);
            ans+=(tmp.size()%2==0 ? 1: 0);
        }
        return ans;
    }
};