class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
      string temp="";
      for(int i=0;i<licensePlate.size();i++){
        if(isupper(licensePlate[i])) temp+=tolower(licensePlate[i]);
        if(islower(licensePlate[i]))temp+=licensePlate[i];
      }
    string ans="";
      vector<int>freq(26,0);
      for(char ch:temp) freq[ch-'a']++;
      for(string s:words){
       vector<int>freq1=freq;
       for(char ch: s){
        //found char
        if(freq1[ch-'a']>0) freq1[ch-'a']--;
       }
       bool flag=false;
      for(int i=0;i<freq1.size();i++){
        if(freq1[i]!=0){
         flag=true;
         break;
        } 
      }
      //all char 0
      if(flag==false){
       if(ans=="" || ans.size()>s.size()){
        ans=s;
       }
      }
      
      }
      return ans;
    }
};