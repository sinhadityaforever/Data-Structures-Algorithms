class Solution {
public:
    int calcSum(int num){
        int sum =0;
        while(num!=0){
            sum+=(num%10);
            num/=10;
        }
        return sum;
    }
    int maximumSum(vector<int>& nums) {
        unordered_map<int, pair<int, int>> mp;
        for(int i=0; i<nums.size(); i++){
            int sum = calcSum(nums[i]);
            if(mp.find(sum)==mp.end()){
                mp[sum] = {nums[i], -1};
            }
            else{
                int f = mp[sum].first;
                int s = mp[sum].second;
                if(s==-1) mp[sum].second=nums[i];
                // if(f<s) mp[sum] = {s, f};
                else {
                    if(nums[i] > min(f, s)){
                        if(f < s){
                            mp[sum].first = nums[i];
                        } else {
                            mp[sum].second = nums[i];
                        }
                    }
                }
                
            }
        }
        int sum = -1;
        for(auto it: mp){
            if(it.second.first!=-1 && it.second.second!=-1) sum = max(sum, it.second.first+it.second.second);
        }
        return sum;
    }
};