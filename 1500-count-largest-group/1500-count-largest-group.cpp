class Solution {
public:
    int countLargestGroup(int n) {
        unordered_map<int, int> mp;
        for(int i=1; i<=n; i++){
            string tmp = to_string(i);
            int sum=0;
            for(int j=0; j<tmp.size(); j++){
                sum+=(tmp[j]-'0');
            }
            mp[sum]++;
        }
        int maxi = 0;

        for(auto it: mp){
            maxi = max(maxi, it.second);
        }
        int ans=0;
        for(auto it: mp){
           if(it.second==maxi) ans++;
        } 
        return ans;
    }
};