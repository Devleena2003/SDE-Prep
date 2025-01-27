//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
   void f(unordered_set<string>&set,string s,int index){
       if(index==s.length())
       set.insert(s);
       for(int i=index;i<s.length();i++){
           swap(s[index],s[i]);
           f(set,s,index+1);
           swap(s[index],s[i]);
       }
   }
    vector<string> findPermutation(string &s) {
        // Code here there
        unordered_set<string>set;
        f(set,s,0);
        vector<string>ans;
        for(auto it: set){
            ans.push_back(it);
        }
        
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        vector<string> ans = ob.findPermutation(S);
        sort(ans.begin(), ans.end());
        for (auto i : ans) {
            cout << i << " ";
        }
        cout << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends