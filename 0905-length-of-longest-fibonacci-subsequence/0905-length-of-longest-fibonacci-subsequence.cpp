class Solution {
public:
    int lenLongestFibSubseq(vector<int>& arr) {
        vector<int> tmp;
        unordered_map<int, int> mp;
        int ans = 0;
        for(auto it: arr) mp[it]++;
        for(int i=0; i<arr.size(); i++){
            for(int j=i+1; j<arr.size(); j++){
                int f = arr[i];
                int s = arr[j];
                tmp.push_back(f);
                tmp.push_back(s);
                while(mp.find(f+s)!=mp.end()){
                    tmp.push_back(f+s);
                    f=s;
                    s=tmp.back();
                }
                if(tmp.size()>2){
                    int s = tmp.size();
                    ans = max(ans, s);
                }
                tmp.clear();
            }
        }
        return ans;
    }
};