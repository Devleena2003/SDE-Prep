class Solution {
  public:
  void lpsfind(vector<int>&lps,string &needle){
    int pref=0;
    int suff=1;
    while(suff<needle.size()){
        if(needle[pref]==needle[suff]){
            lps[suff]=pref+1;
            pref++;
            suff++;
        }else{
            if(pref==0){
                suff++;
            }else{
                pref=lps[pref-1];
            }
        }
    }
}
    vector<int> search(string& pat, string& txt) {
        // code here
        int f=0;
        int s=0;
        int n=txt.size();
        int m=pat.size();
        vector<int>lps(pat.size(),0);
        vector<int>res;
        lpsfind(lps,pat);
        while(f<n){
            if(txt[f]==pat[s]){
                f++;
                s++;
                if(s==m){
                    res.push_back(f-s);
                    s=lps[s-1];// find next match
                }
            }else{
                if(s==0) f++;
                else{
                    s=lps[s-1]; //find next match;
                }
            }
        }
      return res;  
    }
};