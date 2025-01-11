class Solution {
public:
    bool canConstruct(string s, int k) {
        // if(s.size())
        unordered_map<char, int> mp;
        for(auto it: s) mp[it]++;
        int p=0;
        int np=0;
        for(auto it: mp){
            int cnt = it.second;
            p+=cnt/2;
            np+=cnt%2;
        }
        return (np<=k && k<=s.size());
    }
};