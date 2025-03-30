class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char, int> mp;
        for(int i=0; i<s.size(); i++){
            mp[s[i]] = i;
        }
        vector<int> ans;
        int i=0;
        while(i<s.size()){
            int maxi =mp[s[i]];
            int j =i;
            while(j<maxi && j<s.size()){
                maxi = max(maxi, mp[s[j]]);
                j++;
            }
            ans.push_back(maxi-i+1);
            i=maxi+1;
        }
        return ans;
    }
};