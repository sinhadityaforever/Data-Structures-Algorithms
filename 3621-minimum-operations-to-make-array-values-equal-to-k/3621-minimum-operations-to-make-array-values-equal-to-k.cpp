class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
       sort(nums.begin(), nums.end());
       unordered_set<int> st;
       if(nums[0]<k) return -1;
       bool found =0;
       if(nums[0]==k) found =1;
       for(auto it: nums){
        if(it==k) found =1;
        if(it>k) st.insert(it);
       }
       return  st.size();
    }
};