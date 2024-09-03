//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
  int fun(char str){
        int x=0;
        map<char, int>mp;
        mp.insert({'I', 1 });
        mp.insert({'V', 5 });
        mp.insert({'X', 10 });
        mp.insert({'L', 50 });
        mp.insert({'C', 100 });
        mp.insert({'D', 500 });
        mp.insert({'M', 1000 });
        for(auto it:mp){
            if(it.first==str)x=it.second;
        }
        return x;
    }
    int romanToDecimal(string &str) {
        // code here
        int data=0;
        for(int i=0;i<str.size()-1;i++){
            if(fun(str[i])<fun(str[i+1])){
              data-=fun(str[i]);  
            }else{
                data+=fun(str[i]); //5
            }
        }
        data+=fun(str[str.size()-1]);
        return data;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}
// } Driver Code Ends