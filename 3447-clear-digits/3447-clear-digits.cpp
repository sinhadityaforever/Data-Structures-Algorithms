class Solution {
public:
    string clearDigits(string s) {
        string ans;
        for(auto it: s){
            if(it<='9' && it>='0'){
                if(ans.size()>0)
                ans.pop_back();
            }
            else ans.push_back(it);
        }
        return ans;
    }
};