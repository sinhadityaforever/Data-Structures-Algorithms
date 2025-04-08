class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_map<int, int> mp;
        int n = nums.size();
        int index =-1;
        for(int i = n-1; i>=0; i--){
            mp[nums[i]]++;
            if(mp[nums[i]]>1){
                index = i+1;
                break;
            }
        }
        if(index==-1) return 0;
        int a = index/3;
        int b = index%3;
        return b>0 ? a+1 : a;
    }
};