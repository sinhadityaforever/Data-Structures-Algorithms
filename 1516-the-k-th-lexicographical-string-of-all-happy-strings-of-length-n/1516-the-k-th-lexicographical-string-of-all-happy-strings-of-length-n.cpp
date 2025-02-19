class Solution {
public:
    void solve(int n, string curr, char last, set<string> &st){
        if(n==0){
            st.insert(curr);
            return;
        }
        for(int i='a'; i<='c'; i++){
            if(i==last) continue;
            curr+=i;
            solve(n-1, curr, i, st);
            curr.pop_back();
        }
    }
    string getHappyString(int n, int k) {
        set<string> st;
        string curr;
        solve(n, curr, 'd', st);
        cout<<st.size()<<endl;
        for(auto it: st){
            if(k==1) return it;
            cout<<it<<endl;
            k--;
        }
        return "";
        
    }
};