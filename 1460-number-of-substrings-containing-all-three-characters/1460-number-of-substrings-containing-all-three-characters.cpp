class Solution {
public:
    int numberOfSubstrings(string s) {
        int ans=0;
        int l=0;
        int r=0;
        unordered_map<char, int> mp;
        int n = s.size();
        while(r<n){
            mp[s[r]]++;
            while(mp.size()==3 && l<r){
                ans++;
                ans+=(n-r-1);
                mp[s[l]]--;
                if(mp[s[l]]==0) mp.erase(s[l]);
                l++;
            }
            r++;
        }
        return ans;
    }
};