class Solution {
    public int minimumLength(String s) {
        if(s.length()<3) return s.length();
        Map<Character, Integer> mp = new HashMap();
        for(char c: s.toCharArray()){
            mp.put(c, mp.getOrDefault(c, 0)+1);
        }
        int ans=0;
        for(int it: mp.values()){
            ans+=(it%2==0 ? 2 : 1);
        }
        return ans;
    }
}