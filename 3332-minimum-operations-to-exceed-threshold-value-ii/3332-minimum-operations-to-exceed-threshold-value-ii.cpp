class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue <long long, vector<long long>, greater<long long>> pq;
        for(auto it: nums){
            pq.push(it);
        }
        int count=0;
        while(pq.top()<k){
            int t1 = pq.top();
            pq.pop();
            if(!pq.empty()){
            int t2 = pq.top();
            pq.pop();
            pq.push((long)t1*2+t2);
            count++;
            }
            else break;
            
            
            
        }
        return count;
    }
};