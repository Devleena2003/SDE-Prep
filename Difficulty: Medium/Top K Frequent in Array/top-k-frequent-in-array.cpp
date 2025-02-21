//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> topKFrequent(vector<int> &arr, int k) {
        // Your code here
        vector<int>res;
        map<int,int>mp;
        priority_queue<pair<int,int>>pq;
        
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        
        for(auto it:mp){
            pq.push({it.second,it.first});
        }
        
        while(k>0){
            int ele=pq.top().second;
            res.push_back(ele);
            pq.pop();
            k--;
        }
        
        return res;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();

    while (t--) {

        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        vector<int> res = obj.topKFrequent(arr, k);
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends