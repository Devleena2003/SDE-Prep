class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
      int n=A.size();
      vector<int>result(n);
      vector<int>count(n+1,0);
      int common=0;
      for(int i=0;i<n;i++){
        count[A[i]]++;  //count [1]=1  count[3]=2;
        if(count[A[i]]==2) common++; //common=1
        count[B[i]]++; //count[3]=1; count[1]=2
        if(count[B[i]]==2) common++; //common=2;
        result[i]=common; //res[0]=0, 2
      }
return result;
    }
};