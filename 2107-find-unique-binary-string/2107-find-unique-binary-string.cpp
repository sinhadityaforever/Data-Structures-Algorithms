class Solution {
public:

    string solve(unordered_map<string, int> &mp, int index, int n, string curr){
        if(index==n){
            if(mp.find(curr)==mp.end()) return curr;
            else return "";
        }
        for(int i=0; i<=1; i++){
            curr+=(i+'0');
            string tmp = solve(mp, index+1, n, curr);
            curr.pop_back();
            if(tmp.size()>0) return tmp;
        }
        return "";

    }
    string findDifferentBinaryString(vector<string>& nums) {
        unordered_map<string, int> mp;
        for(auto it: nums) mp[it]++;
        string curr;
        int n = nums.size();
        return solve(mp, 0, n, curr);
    }
};