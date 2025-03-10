class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        for(int i=0; i<k-1; i++){
            colors.push_back(colors[i]);
        }
        int l =0;
        int r=1;
        int ans=0;
        while(r<colors.size()){
            if(colors[r]==colors[r-1]){
                l=r;
                r++;
                continue;
            }

            r++;
            // if(r-l<k) continue;
            if(r-l==k){
            ans++;
            l++;
            }

        }
        return ans;
    }
};