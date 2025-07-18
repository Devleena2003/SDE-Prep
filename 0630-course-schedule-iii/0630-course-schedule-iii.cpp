class Solution {
public:
 static bool comp(vector<int>&a, vector<int>&b) {
		return a[1] < b[1];
	}
    int scheduleCourse(vector<vector<int>>& courses) {
     int n=courses.size();
     	sort(courses.begin(), courses.end(), comp);
     priority_queue<int>pq;
     int sum=0;
     for(int i=0;i<n;i++){
       int duration=courses[i][0];
       int deadline=courses[i][1];
       if(sum+duration<=deadline){
        sum+=duration;
        pq.push(duration);
       }
       else if(pq.size() && pq.top()>duration){
         sum+=duration-pq.top();
         pq.pop();
         pq.push(duration);
       }
     } 
     return pq.size();  
    }
};