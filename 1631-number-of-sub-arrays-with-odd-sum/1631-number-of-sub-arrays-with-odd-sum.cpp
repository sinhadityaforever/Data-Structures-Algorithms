class Solution {
public:
    int m = 1000000007;
    int numOfSubarrays(vector<int>& arr) {
        vector<int> v;
        v.push_back(arr[0]);
        for(int i=1; i<arr.size(); i++){
            v.push_back(v.back()+arr[i]);
        }
        int odd =0;
        int even =0;
        int ans =0;
        for(auto it: v){
            if(it%2==1){
                odd++;
                ans++;
                ans+=even;
            }
            else{
                even++;
                ans+=odd;
            }
            ans=ans%m;
        }
        return ans;
    }
};