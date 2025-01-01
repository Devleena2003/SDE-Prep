class Solution {
public:
    int maxScore(string s) {
          int n=s.length();
        int zeroCount=0;
        int oneCount=0;
        int maxCount=0;
        for(int i=0; i<n; i++){
            if(s[i]=='1')
            oneCount++;
        }
        for(int i=0; i<n-1; i++){
            if(s[i]=='0'){
            zeroCount++;
            }
            if(s[i]=='1'){
            oneCount--;
            }
            int totalCount=oneCount+zeroCount;
            maxCount=max(maxCount,totalCount);
        }
        return maxCount;
    }
};