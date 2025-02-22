//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
#define N 105
using namespace std;
void printArray(vector<int> arr, int size)
{
for (int i=0; i < size; i++)
	cout << arr[i] << " ";
}


// } Driver Code Ends
//User function Template for C++


class Solution
{
    public:
    //Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
        //code here
          priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>, 
    greater<pair<int,pair<int,int>>> > pq;
        vector<int>ans;
        for(int i=0;i<K;i++){
            pq.push({arr[i][0],{i,0}});
        }
        while(!pq.empty()){
            auto x=pq.top();
            pq.pop();
            int val=x.first;
            int row=x.second.first;
            int col=x.second.second;
            ans.push_back(val);
            col++;
            if(col<K){
                pq.push({arr[row][col],{row,col}});
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--){
	    int k;
	    cin>>k;
	    vector<vector<int>> arr(k, vector<int> (k, 0));
	    for(int i=0; i<k; i++){
	        for(int j=0; j<k; j++)
	        {
	            cin>>arr[i][j];
	        }
	    }
	    Solution obj;
    	vector<int> output = obj.mergeKArrays(arr, k);
    	printArray(output, k*k);
    	cout<<endl;
    }
	return 0;
}






// } Driver Code Ends