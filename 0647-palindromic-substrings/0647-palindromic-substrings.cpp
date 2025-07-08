class Solution {
public:
int expand(string &s, int i, int j){
    int c=0;
    while(i>=0 && j<s.size()&& s[i]==s[j]){
        c++;
        i--;
        j++;
    }
    return c;
}
    int countSubstrings(string s) {
   int count=0;
        for(int i=0;i<s.size();i++){
   count+=expand(s,i,i);
   count+=expand(s,i,i+1);

        }
   return count; 
    }
};