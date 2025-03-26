//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  bool f(int index,string &s, set<string>&st, vector<int>&dp ){
      if(index==s.length()) return true;
      if(dp[index]!=-1) return dp[index];
      string temp="";
      for(int j=index;j<s.length();j++){
          temp+=s[j];
          if(st.find(temp)!=st.end()){
              if(f(j+1,s,st,dp)) return dp[index]=true;
          }
      }
      return dp[index]=false;
  }
    bool wordBreak(string &s, vector<string> &dictionary) {
        // code here
        vector<int>dp(s.size(),-1);
        set<string>st(dictionary.begin(),dictionary.end());
        return f(0,s,st,dp);
    }
};


//{ Driver Code Starts.

vector<string> inputLine() {
    string str;
    getline(cin, str);
    stringstream ss(str);
    vector<string> res;
    while (ss >> str) {
        res.push_back(str);
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        cin >> s;
        cin.ignore();
        vector<string> dictionary = inputLine();

        Solution ob;
        if (ob.wordBreak(s, dictionary)) {
            cout << "true\n";
        } else
            cout << "false\n";
        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends