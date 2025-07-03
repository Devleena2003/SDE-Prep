class Solution {
public:
    char kthCharacter(int k) {
      string res="a";
      while(res.length()<k){
        int len=res.length();
        for(int i=0;i<len;i++){
            char next='a'+((res[i]-'a'+1) %26);
            res+=next;
        }
      } 
      return res[k-1]; 
    }
};