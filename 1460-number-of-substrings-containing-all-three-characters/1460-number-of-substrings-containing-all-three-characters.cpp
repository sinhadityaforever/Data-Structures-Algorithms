class Solution {
public:
    int numberOfSubstrings(string s) {
        vector<int> pos(3, -1);
        int n = s.size();
        int ans=0;
        for(int i=0; i<n; i++){
            char c = s[i];
            pos[s[i]-'a'] = i;
            ans+=(1+ min(pos[0], min(pos[1], pos[2])));

        }
        return ans;
    }
};