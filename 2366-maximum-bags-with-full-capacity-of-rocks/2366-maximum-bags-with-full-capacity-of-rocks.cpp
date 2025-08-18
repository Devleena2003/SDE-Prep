class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int n=capacity.size();
        vector<int>need(n);
        for(int i=0;i<n;i++){
            need[i]=capacity[i]-rocks[i];
        }
        sort(need.begin(),need.end());
        int c=0;
        for(int i=0;i<n;i++){
         if(need[i]==0)  c++;
         else if(additionalRocks>=need[i])  {
            additionalRocks-=need[i];
            c++;
         }
         else break;
        }
return c;
    }
};