class Solution {
  public:
    int getLPSLength(string &s) {
        // code here
        vector<int>lps(s.size(),0);
        int pref=0;
        int suff=1;
        while(suff<s.size()){
           if(s[pref]==s[suff]) {
               lps[suff]=pref+1;
               suff++;
               pref++;
           }else{
             if(pref==0){
                 //put zero in to lps
                 lps[suff]=0;
                 suff++;
             } else{
                 //shift the pref index
                 pref=lps[pref-1];
             } 
           }
        }
        return lps[s.size()-1];
    }
};