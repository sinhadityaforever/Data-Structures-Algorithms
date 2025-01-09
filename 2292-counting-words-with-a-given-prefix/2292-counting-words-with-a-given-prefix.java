

class Solution {

    // public boolean solve(String word, String pre){
    //     int i=0;
    //     int j=0;
    //     if(pre)
    //     while(i<pre.length()){
    //         if(j<word.length() && word.charAt(j++)!=pre.charAt(i++)) return false;
    //     }

    //     return true;
    // }

    public int prefixCount(String[] words, String pref) {
        // int ans=0;
        // for(String it: words){
        //     ans+= solve(it, pref) == true ? 1 : 0;
        // }
        int ans=0;
        int n = pref.length();
        for(String word: words){
            if(word.length()>=n && word.startsWith(pref) ) ans++;
        }
        return ans;
    }
}