class Solution {
public:
void lpsfind(vector<int>&lps,string needle){
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
    int strStr(string haystack, string needle) {
       vector<int>lps(needle.size(),0);
       lpsfind(lps,needle);
       int f=0;
       int s=0;
       while(f<haystack.size() && s<needle.size()){
        if(haystack[f]==needle[s]){
            f++;
            s++;
        }else{
            if(s==0){
                f++;
            }else{
                s=lps[s-1];
            }
        }
       }
       if(s==needle.size()) return f-s;
       else return -1;
    }
};