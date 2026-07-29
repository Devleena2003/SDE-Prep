class Solution {
public:
    string removeDuplicateLetters(string s) {
       vector<int>vis(26,0);
       stack<char>st; 
       map<char,int>mp;
       //store last occurance
      for(int i=0;i<s.size();i++){
        mp[s[i]]=i;
      }
      for(int i=0;i<s.size();i++){
        if(vis[s[i]-'a']==1) continue;
        while(!st.empty()   && st.top()>s[i] && mp[st.top()]>i){
            vis[st.top()-'a']=0;
            st.pop();
        }
        st.push(s[i]);
        vis[s[i]-'a']=1;
      }
      string ans="";
      while(!st.empty()){
        ans+=st.top();
        st.pop();
      }
      reverse(ans.begin(),ans.end());
      return ans;
    }
};