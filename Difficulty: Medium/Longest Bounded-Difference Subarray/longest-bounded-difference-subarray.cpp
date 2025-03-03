//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> longestSubarray(vector<int>& arr, int x) {
        // code here
         priority_queue<pair<int,int>>mh;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>minh;
        int i=0,j=0;
        vector<int>ans;
        int n=arr.size();
        while(j<n){
            mh.push({arr[j],j});
            minh.push({arr[j],j});
            while((mh.top().first-minh.top().first)>x){
                i=min(mh.top().second,minh.top().second)+1;
                while(mh.top().second<i){
                    mh.pop();
                }
                while(minh.top().second<i){
                    minh.pop();
                }
            }
            vector<int>res(arr.begin()+i,arr.begin()+j+1);
            if(res.size()>ans.size()){
                ans=res;
            }
            j++;
        }
        
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        vector<int> ans = ob.longestSubarray(arr, k);
        for (auto it : ans) {
            cout << it << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends