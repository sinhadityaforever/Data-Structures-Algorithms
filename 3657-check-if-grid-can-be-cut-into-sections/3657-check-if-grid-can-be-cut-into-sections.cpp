class Solution {
public:

    void merge(vector<vector<int>> &nums){
        sort(nums.begin(), nums.end());
        vector<vector<int>> v;
        for(int i=0; i<nums.size(); i++){
            if(i>0 && nums[i][0]<v.back()[1]){
                int end = max(nums[i][1], v.back()[1]);
                v[v.size()-1] = {v.back()[0], end};
                continue;
            }
            else{
                v.push_back(nums[i]);
                continue;
            }
        }
        nums=v;
    }
    bool checkValidCuts(int n, vector<vector<int>>& rectangles) {
        vector<vector<int>> horizontal;
        vector<vector<int>> vertical;
        for(int i=0; i<rectangles.size(); i++){
            horizontal.push_back({rectangles[i][1], rectangles[i][3]});
            vertical.push_back({rectangles[i][0], rectangles[i][2]});
        }

        merge(horizontal);
        merge(vertical);
        int hCount=0;
        int vCount =0;
        for(auto it: horizontal) cout<<it[0]<<" "<<it[1]<<endl;
        for(int i=1; i<horizontal.size(); i++){
            if(horizontal[i][0]-horizontal[i-1][1]>=0) hCount++;
        }
        for(int i=1; i<vertical.size(); i++){
            if(vertical[i][0]-vertical[i-1][1]>=0) vCount++;
        }

        return hCount > 1 || vCount > 1;

    }
};