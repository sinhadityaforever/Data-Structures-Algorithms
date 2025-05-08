class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five =0;
        int ten =0;
        bool ans = true;
        for(auto it: bills){
            if(it == 5) five++;
            if(it==10) ten++;
            int change = it - 5;
            if(change ==0) continue;
            while(change>=10 && ten >0){
                change-=10;
                ten--;
            }
            while(change>=5 && five >0){
                change-=5;
                five--;
            }
            if(change>0) return false;
            
        }
        return true;
    }
};