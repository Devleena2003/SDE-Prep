class Solution {
public:
    vector<bool> checkIfPrerequisite(int numCourses, vector<vector<int>>& prerequisites, vector<vector<int>>& queries) {
       int n=numCourses;
       vector<vector<int>>v(n,vector<int>(n,0));
       for(int i=0;i<prerequisites.size();i++){
        v[prerequisites[i][0]][prerequisites[i][1]]=1;
       } 

        for(int k=0;k<n;k++){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(v[i][k]==1 && v[k][j]==1 && v[i][j]==0)
                        v[i][j]=1;
                }
            }
        }

        vector<bool> ans(queries.size(),false);
        if(prerequisites.size()==0) return ans;
        for(int i=0;i<queries.size();i++){
            if(v[ queries[i][0] ][ queries[i][1] ]==1)
                ans[i]=true;
        }
        return ans;
    }
};