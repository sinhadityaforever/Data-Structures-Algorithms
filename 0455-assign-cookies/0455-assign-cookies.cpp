class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int ans =0;
        int index =0;
        for(auto it: g){
            bool content = false;
            while(index<s.size()){
                if(s[index]>=it){
                    content = true;
                    index++;
                    break;
                }
                index++;
            }
            if(content) ans++;
        }
        return ans;
    }
};