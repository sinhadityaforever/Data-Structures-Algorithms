class Solution {
public:

    static bool cmp(string a, string b){
        return a.size() > b.size();
    }

    vector<string> stringMatching(vector<string>& words) {
        sort(words.begin(), words.end(), cmp);
        unordered_set<string> ans;
        for(int i=0; i<words.size(); i++){
            for(int j=i+1; j<words.size(); j++){
                if(words[i].find(words[j])!=string::npos){ 
                    ans.insert(words[j]);
                    
                    }
            }
            
        }
        vector<string> ans2;
        for(auto it: ans){
            ans2.push_back(it);
        }
        return ans2;
    }
};