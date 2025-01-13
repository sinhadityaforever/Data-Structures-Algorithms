class Solution {
    public int minimumLength(String s) {
        if(s.length()<3) return s.length();
        int[] arr = new int[26];
        for(char c: s.toCharArray()){
            arr[c-'a']++;
        }
        int ans=0;
        for(int it: arr){
            if(it==0) continue;
            ans+=(it%2==0 ? 2 : 1);
        }
        return ans;
    }
}