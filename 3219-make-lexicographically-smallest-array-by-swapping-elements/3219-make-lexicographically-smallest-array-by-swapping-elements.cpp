class Solution {
public:
    vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {
        int n =nums.size();
        if(n==0) return {};
        vector<pair<int, int>> v;
        for(int i=0; i<n; i++) v.push_back({nums[i], i});
        sort(v.begin(), v.end());

        vector<int> ans(n);
        int s =0;
        for(int i=0; i<n; i++){
            if(i==n-1 || v[i+1].first-v[i].first>limit){
                vector<int> ind;
                for(int j=s; j<=i; j++) ind.push_back(v[j].second);
                sort(ind.begin(), ind.end());
                for(int j=0; j<ind.size(); j++){
                    ans[ind[j]] = v[s+j].first;
                    }
                s=i+1;
            }
        }
        return ans;
    }
};

