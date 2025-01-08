class Solution {
public:
    // static bool cmp(string a, string b){
    //     return a.size() < b.size();
    // }
    bool isSufPref(string a, string b){
        int i =0;
        int j=0;
        while(i<a.size()){
            if(j>=b.size() || a[i++] != b[j++]) return false;
        }
        return true;
    }
    int countPrefixSuffixPairs(vector<string>& words) {
        // sort(words.begin(), words.end(), cmp);
        int ans=0;
        for(int i=0; i<words.size(); i++){
            string rev = words[i];
            reverse(rev.begin(), rev.end());
            for(int j =i+1; j<words.size(); j++){
                string checkR = words[j];
                reverse(checkR.begin(), checkR.end());
                if(isSufPref(words[i], words[j]) && isSufPref(rev, checkR)) ans++;
            }
        }
        return ans;
    }
};