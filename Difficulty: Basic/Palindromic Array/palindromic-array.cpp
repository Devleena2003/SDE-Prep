//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

/*Complete the function below*/

class Solution {
  public:
  bool f(int n){
      int rev=n;
      int sum=0;
      while(n!=0){
          sum=sum*10+(n%10);
          n/=10;
      }
      
      if(rev==sum) return true;
      
      return false;
  }
    bool isPalinArray(vector<int> &arr) {
        // code here
        for(int i=0;i<arr.size();i++){
            if(f(arr[i])==false) return false;
        }
        
        return true;
    }
};


//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;

        cout << (ob.isPalinArray(arr) ? "true" : "false") << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends