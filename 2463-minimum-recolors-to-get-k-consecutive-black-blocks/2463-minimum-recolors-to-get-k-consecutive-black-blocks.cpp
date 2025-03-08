class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int mini = 1e9;
        int i =0;
        while(i+k<=blocks.size()){
            int j =i+k;
            int count = 0;
            for(int it = i; it<j; it++){
                if(blocks[it]=='W') count++;
            }
            mini = min(mini, count);
            i++;
        }
        return mini;
    }
};