//{ Driver Code Starts
// Program to find the maximum profit job sequence from a given array 
// of jobs with deadlines and profits 
#include<bits/stdc++.h>
using namespace std; 

// A structure to represent a job 
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 


// } Driver Code Ends
/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/

class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
   static bool jobComparison(Job a, Job b) {
    return (a.profit > b.profit);
}
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
   sort(arr,arr+n, jobComparison);

    // Find the maximum deadline to create the slot array
    int maxDeadline = 0;
    for (int i = 0; i < n; i++)
        maxDeadline = max(maxDeadline, arr[i].dead);

    // Create a slot array to track available time slots, initialized to false
    vector<int> slots(maxDeadline + 1, -1);  // Using -1 to mark an empty slot

    int jobCount = 0, maxProfit = 0;

    // Iterate over all jobs
    for (int i = 0; i < n; i++) {
        // Find a free slot for this job (starting from the last possible slot)
        for (int j = arr[i].dead; j > 0; j--) {
            if (slots[j] == -1) {  // If the slot is free
                slots[j] = arr[i].id;  // Assign this job to the slot
                jobCount++;             // Increase job count
                maxProfit += arr[i].profit;  // Add profit to the total
                break;                 // Move to the next job
            }
        }
    }

    return {jobCount, maxProfit};
    } 
};

//{ Driver Code Starts.
// Driver program to test methods 
int main() 
{ 
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        Job arr[n];
        
        //adding id, deadline, profit
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        Solution ob;
        //function call
        vector<int> ans = ob.JobScheduling(arr, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
	return 0; 
}



// } Driver Code Ends