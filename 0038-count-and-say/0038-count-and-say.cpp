class Solution {
public:
    string countAndSay(int n) {
        if(n==1) return "1";
        string ans;
        string prev = countAndSay(n-1);
        int i=0;
        while(i<prev.length()){
            // char curr = prev[i];
            int freq =1;
            int j = i+1;
            while(j<prev.length()){
                if(prev[j]==prev[i]){
                    freq++;
                    j++;
                }
                else break;
            }
            ans+=to_string(freq);
            ans+=prev[i];
            i=j;

        }
        return ans;
    }
};