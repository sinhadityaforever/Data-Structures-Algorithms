class Solution {
public:

    bool helper(vector<int> &piles, int h, long long mid){
        int i=0;
        while(i<piles.size()){
            if(piles[i]<=mid) h--;
            else{
                if(piles[i]%mid==0) h-=(piles[i]/mid);
                else{
                    h=h-(piles[i]/mid)-1;
                }
            
            }
            if(h<0) return false;
            i++;
        }
        return true;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        long long s=1;
        long long e=0;
        for(auto it: piles){
            e+=it;
        }
        while(s<e){
            long long mid = s+(e-s)/2;
            if(helper(piles, h, mid)){
                e=mid;
            }
            else s=mid+1;
        }
        return s;
    }
};