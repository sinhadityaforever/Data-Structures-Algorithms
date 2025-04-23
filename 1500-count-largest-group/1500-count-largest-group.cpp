class Solution {
public:
    int countLargestGroup(int n) {
        vector<int> v(37, 0);
        int maxi = 0;
        for(int i=1; i<=n; i++){
             int curr = i;
            int digitSum = 0;
            while (curr > 0) {
                digitSum += curr % 10;
                curr /= 10;
            }
            v[digitSum]++;
            maxi = max(maxi, v[digitSum]);
        }
        
        int ans=0;
        for(auto it: v){
           if(it==maxi) ans++;
        } 
        return ans;
    }
};