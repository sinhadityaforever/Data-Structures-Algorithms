class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        vector<int> arr1(n+1, 0);
        vector<int> arr2(n+1, 0);
        int last =0;
        vector<int> ans(n, 0);
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
};