class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        int maxId = max(nums1[m-1][0], nums2[n-1][0]);
        vector<int> v(maxId+1, 0);
        vector<vector<int>> ans;
        for(int i=0; i<m; i++){
            v[nums1[i][0]]+=nums1[i][1];
        }
        for(int i=0; i<n; i++){
            v[nums2[i][0]]+=nums2[i][1];
        }
        for(int i=0; i<=maxId; i++){
            if(v[i]>0){
                ans.push_back({i, v[i]});
            }
        }
        return ans;

    }
};