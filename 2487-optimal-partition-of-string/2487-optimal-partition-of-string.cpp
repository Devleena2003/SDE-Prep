class Solution {
public:
    int partitionString(string s) {
        int n=s.size();
        int c=0;
        int start=0;
       vector<int>last_seen(26,-1);
        for(int i=0;i<n;i++){
         
         if(last_seen[s[i]-'a']>=start){
            c++;
            start=i;
         }
            last_seen[s[i]-'a']=i;
        }
        return c+1;
    }
};