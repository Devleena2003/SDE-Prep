class Solution {
  public:
    // Function to find the smallest window in the string s1 consisting
    // of all the characters of string s2.
    string smallestWindow(string &s1, string &s2) {
        // Your code here
        int n=s1.size();
        int m=s2.size();
        int l=0;
        int r=0;
        int minLen=INT_MAX;
        int start=-1;
        int count=0;
        unordered_map<char,int>mp;
        for(int i=0;i<m;i++){
            mp[s2[i]]++;
        }
        while(r<n){
            if(mp[s1[r]]>0) count++;
             mp[s1[r]]--;
            while(count==m){
                if(r-l+1<minLen){
                    minLen=r-l+1;
                    start=l;
                }
                mp[s1[l]]++;
                if(mp[s1[l]]>0) count--;
                l++;
            }
            r++;
        }
       if(start==-1) return "";
       else return s1.substr(start,minLen);
    }
};