class Solution {
    public int[] findThePrefixCommonArray(int[] A, int[] B) {
        
        int n = A.length;
        int[] arr1 = new int[n+1];
        int[] arr2 = new int[n+1];
        int last =0;
        int[] ans = new int[n];
        for(int i=0; i<n; i++){
            int tmp =0;
            tmp+=arr2[A[i]];
            arr1[A[i]]++;
            tmp+=arr1[B[i]];
            arr2[B[i]]++;
            tmp+=last;
            ans[i]=tmp;
            last=ans[i];
        }
        return ans;
    }
}