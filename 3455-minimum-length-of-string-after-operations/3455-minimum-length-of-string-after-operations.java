class Solution {
    public int minimumLength(String s) {
        if(s.length()<3) return s.length();
        int[] arr = new int[26];
        for(int i=0; i<s.length(); i++){
            arr[s.charAt(i)-'a']++;
        }
        int ans=0;
        for(int it: arr){
            if(it==0) continue;
            ans+=(it%2==0 ? 2 : 1);
        }
        return ans;
    }
}