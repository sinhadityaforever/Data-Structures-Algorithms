class Solution {
public:
    int countLargestGroup(int n) {
        vector<int> v(37, 0);
        int maxi = 0;
        for(int i=1; i<=n; i++){
            string tmp = to_string(i);
            int sum=0;
            for(int j=0; j<tmp.size(); j++){
                sum+=(tmp[j]-'0');
            }
            v[sum]++;
            maxi = max(maxi, v[sum]);
        }
        
        int ans=0;
        for(auto it: v){
           if(it==maxi) ans++;
        } 
        return ans;
    }
};