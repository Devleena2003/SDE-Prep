class Solution {
  public:
    int minMeetingRooms(vector<int> &start, vector<int> &end) {
        // code here
        int res=0,c=0,s=0,e=0;
        
        sort(start.begin(),start.end());
        sort(end.begin(),end.end());
        
        while(s<start.size()){
           if(start[s]<end[e]){
               s++;
               c++;
           } else{
               e++;
               c--;
           }
           res=max(res,c);
        }
        return res;
    }
};
