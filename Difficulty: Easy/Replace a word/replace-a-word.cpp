// User function Template for C++
class Solution {
  public:
    string replaceAll(string str, string oldW, string newW) {
        // code here
        string ans;
        for(int i=0;i<str.length();i++){
            string res;
            for(int j=i;j<oldW.length()+i;j++){
                res+=str[j];
            }
            
            if(res==oldW) {
                ans+=newW;
                i+=oldW.length()-1;
            }else{
                ans+=str[i];
            }
        }
        return ans;
    }
};