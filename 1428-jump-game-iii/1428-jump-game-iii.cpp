class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
      queue<int>q;
      q.push(start);
      vector<bool>visited(arr.size(),false); 

      while(!q.empty()){
        int top=q.front();
        q.pop();
        if(arr[top]==0) return true;
        if(visited[top]) continue;
        visited[top]=true;
        int forward=top+arr[top];
        int backward=top-arr[top];
        if(forward<arr.size() && !visited[forward]) q.push(forward);
        if(backward>=0 && !visited[backward])q.push(backward);
        
      }
      return false;
    }
};