class Solution {
    public boolean canConstruct(String s, int k) {
        Map<Character, Integer> mp = new HashMap();
        int np=0;
        for(char c: s.toCharArray()){
            mp.put(c, mp.getOrDefault(c, 0)+1);
        }
        for(int it: mp.values()){
            np+=it%2;
        }
        return np<=k && k<=s.length();
    }
}