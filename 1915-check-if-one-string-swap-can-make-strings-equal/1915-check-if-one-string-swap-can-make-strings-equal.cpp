class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int n = s1.size();
        if(n!=s2.size()) return false;
        vector<int> tmp;
        for(int i=0; i<n; i++){
            if(s1[i]!=s2[i]) tmp.push_back(i);
        }
        if(tmp.size()==0) return true;
        if(tmp.size()!=2) return false;
        cout<<tmp[0]<<endl;
        cout<<tmp[1]<<endl;
        swap(s2[tmp[0]], s2[tmp[1]]);
        return s1 == s2;

    }
};