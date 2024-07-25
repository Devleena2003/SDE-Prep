vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
     priority_queue<pair<int,int>>pq;
     vector<int>ans;
     for(int i=0;i<k;i++){
         pq.push({arr[i],i});
     }
     ans.push_back(pq.top().first);
     for(int i=k;i<n;i++){
         pq.push({arr[i],i});
         while(pq.top().second<i-k+1){
             pq.pop();
         }
           ans.push_back(pq.top().first);
     }
     return ans;
    }