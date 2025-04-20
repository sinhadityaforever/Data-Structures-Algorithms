class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int, int> mp;
        int zeroes = 0;
        int ans=0;
        for(auto it: answers){
            if(it==0) zeroes++;
            else{
            mp[it]++;
            if(mp[it]==it+1){
                ans+=(it+1);
                mp.erase(it);
            }
            }
        }
        
        for(auto it: mp){
            ans+=(it.first+1);
        }
        ans+=zeroes;
        return ans;
    }
};