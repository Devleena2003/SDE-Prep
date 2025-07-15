// User function Template for C++

class Solution {
  public:
    string minWindow(string& s1, string& s2) {
        // Write your Code here
       int n=s1.size();
       int m=s2.size();
       int sIndex=-1;
       int tIndex=-1;
       int minLen=INT_MAX;
       int start=-1;
       for(int i=0;i<s1.size();i++){
           if(s1[i]!=s2[0]) continue;
            sIndex=i;
            tIndex=0;
          
        while(sIndex<n && tIndex<m){
             if(s1[sIndex]==s2[tIndex]) tIndex++;
             sIndex++;
           }
           if(tIndex==m){
               tIndex=m-1;
               int end= sIndex-1;
               sIndex=end;
               while(tIndex>=0){
                    if(s1[sIndex]==s2[tIndex]) tIndex--;
                   sIndex--; 
               }
               sIndex++;
               if(end-sIndex+1<minLen){
                   minLen=end-sIndex+1;
                   start=sIndex;
               }
           }
       }
           return start==-1?"":s1.substr(start,minLen);
    }
};
