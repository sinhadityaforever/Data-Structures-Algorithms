class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> prev;
        int eq=1;
        vector<int> aft;
        for(auto it: nums){
            if(it<pivot) prev.push_back(it);
            else if(it==pivot) eq++;
            else aft.push_back(it);
        }
        vector<int> ans;
        for(int i=0; i<prev.size(); i++) ans.push_back(prev[i]);
        while(eq>1){
            ans.push_back(pivot);
            eq--;
        }
        for(int i=0; i<aft.size(); i++) ans.push_back(aft[i]);
        return ans;

    }
};