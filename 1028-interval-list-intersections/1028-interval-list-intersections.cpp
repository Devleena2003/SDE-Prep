class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        int n=firstList.size();
        int m=secondList.size();
        int i=0,j=0;
        vector<vector<int>>res;
        while(i<n && j<m){
          int start=max(firstList[i][0],secondList[j][0]);
          int end=min(firstList[i][1],secondList[j][1]);
          if(start<=end)res.push_back({start,end});
           if(firstList[i][1]<secondList[j][1]) i++;
           else j++;
        }
        return res;
    }
};