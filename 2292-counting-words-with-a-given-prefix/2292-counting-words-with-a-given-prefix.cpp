class Solution {
public:
    bool solve(string word, string pref){
        int i=0;
        int j=0;
        while(i<pref.size()){
            if(word[j++]!=pref[i++]) return false;
        }
        return true;
    }
    int prefixCount(vector<string>& words, string pref) {
        int ans=0;
        for(auto it: words){
            ans+= solve(it, pref) ? 1:0;
        }
        return ans;
    }
};