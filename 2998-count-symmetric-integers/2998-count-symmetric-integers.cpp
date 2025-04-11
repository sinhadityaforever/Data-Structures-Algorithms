class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int ans =0;
        for(int i=low; i<=high; i++){
            int num = i;
            string s = to_string(num);

            if(s.size()%2!=0) continue;
            int lsum=0;
            int rsum=0;
            for(int j=0; j<s.size()/2; j++){
                lsum += (s[j] - '0');
            }
            for(int j =s.size()-1; j>=s.size()/2; j--){
                rsum += (s[j]-'0');
            }
            ans+= lsum == rsum;
        }
        return ans;
    }
};