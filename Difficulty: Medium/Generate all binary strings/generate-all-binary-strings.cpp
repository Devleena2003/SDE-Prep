//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:

   void generateBinaryStrings(int n, string s,vector<string>& ans) {
  
    if (s.size() == n) {
        ans.push_back(s);
        return;
    }

    generateBinaryStrings(n, s + "0",ans);


    if (s.empty() || s.back() != '1')
        generateBinaryStrings(n, s + "1",ans);
}


    vector<string> generateBinaryStrings(int num){
        //Write your code
        vector<string>ans;
        generateBinaryStrings(num,"",ans);
        return ans;
        
    }
};

//{ Driver Code Starts.
int main(){
    int t = 1;
    cin >> t;


    while(t--){
        //Input
        int n; cin >> n;

        Solution obj;
        
        vector<string> v = obj.generateBinaryStrings(n);
        for(auto it:v) cout<<it<<" ";
        cout << endl;
    
cout << "~" << "\n";
}

    return 0;
}

// } Driver Code Ends