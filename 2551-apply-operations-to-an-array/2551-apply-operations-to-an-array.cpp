class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n = nums.size();
        for(int i=0; i<n-1; i++){
            if(nums[i]==nums[i+1]){
                nums[i]*=2;
                nums[i+1]=0;
            }
        }

        queue<int> q;
        for(auto it: nums){
            if(it!=0) q.push(it);
        }
        int index =0;
        while(!q.empty()){
            int front = q.front();
            q.pop();
            nums[index++]=front;
        }
        for(int i=index; i<n; i++) nums[i]=0;
        return nums;
    }
};