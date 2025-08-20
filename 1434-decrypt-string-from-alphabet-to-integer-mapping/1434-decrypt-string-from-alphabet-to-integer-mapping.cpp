class Solution {
public:
    string freqAlphabets(string s) {
       unordered_map<string,char>mp;
       for(int i=1;i<=9;i++){
           mp[to_string(i)]='a'+i-1;
       }
          for(int i=10;i<=26;i++){
           mp[to_string(i)+"#"]='a'+i-1;
       }
        string temp="";
        int i=0;
       while(i<s.size()){
          if(i<s.size()-2 && s[i+2]=='#' ) {
            temp+=mp[s.substr(i,3)];
              i+=3;
          }else{
             temp+=mp[s.substr(i,1)] ;
             i+=1;
          } 
        }
        return temp;  
    }
};