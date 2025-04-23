class Solution {
public:
    int countLargestGroup(int n) {
        unordered_map<int, int> mp;
        int maxi = 0;
        for(int i=1; i<=n; i++){
            string tmp = to_string(i);
            int sum=0;
            for(int j=0; j<tmp.size(); j++){
                sum+=(tmp[j]-'0');
            }
            mp[sum]++;
            maxi = max(maxi, mp[sum]);
        }
        
        int ans=0;
        for(auto it: mp){
           if(it.second==maxi) ans++;
        } 
        return ans;
    }
};