class Solution {
public:

    vector<int> genRow(int n){
        vector<int> ans ={1};
        int tmp =1;
        for(int i=1; i<n; i++){
            tmp = tmp*(n-i);
            tmp/=i;
            ans.push_back(tmp);
        }
        return ans;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=1; i<=numRows; i++){
            ans.push_back(genRow(i));
        }
        return ans;
    }
};