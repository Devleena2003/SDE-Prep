//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int maxPartitions(string &s) {
        // code here
        vector<int>v(26,-1);
        for(int i=0;i<s.size();i++){
            int index=s[i]-'a';
            v[index]=i; 
        }
        int last=-1;
        int c=0;
        for(int i=0;i<s.size();i++){
            int index=s[i]-'a'; 
            last=max(last,v[index]);
            if(i==last){
                c++;  
                last=-1;
            }
        }
        return c;
    }
};


//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;

    for (int i = 0; i < tc; ++i) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.maxPartitions(s) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends