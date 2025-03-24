class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
       sort(meetings.begin(),meetings.end());
       vector<vector<int>>merge;
       for(auto it: meetings){
        if(merge.empty()|| it[0]>merge.back()[1]){
           merge.push_back(it);
        }
        else{
            merge.back()[1]=max(merge.back()[1],it[1]);
        }
       } 
       int meetDays=0;
       for (auto it:merge){
        meetDays+=(it[1]-it[0]+1);
       }

       return  days-meetDays;
    }
};