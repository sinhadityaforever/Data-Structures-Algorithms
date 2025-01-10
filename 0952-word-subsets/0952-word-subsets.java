class Solution {
    public List<String> wordSubsets(String[] words1, String[] words2) {
        List<String> ans = new ArrayList();
        int n = words1.length;
        int m = words2.length;
        int[] maxFreq = new int[26];

        for(int i=0; i<m; i++){
            int[] tmp = new int[26];
            for(char c: words2[i].toCharArray()){
                int index = c-'a';
                tmp[index]++;
                maxFreq[index] = maxFreq[index] < tmp[index] ? tmp[index] : maxFreq[index];

            }
        }

        for(int i=0; i<n; i++){
            int[] arr = new int[26];
            for(char c: words1[i].toCharArray()){
                arr[c-'a']++;
            }
            boolean flag = true;
            for(int j=0; j<26; j++){
                if(maxFreq[j]>arr[j]) flag = false;
            }
            if(flag==true) ans.add(words1[i]);
        }
        return ans;



    }
}