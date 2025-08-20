class Solution {
public:
static bool cmp(const pair<string,int>&a, const  pair<string,int>b){
    if(a.second==b.second) return a.first<b.first;
    else return a.second<b.second;
 }
    vector<string> watchedVideosByFriends(vector<vector<string>>& watchedVideos, vector<vector<int>>& friends, int id, int level) {
        queue<int>q;
        vector<int>vis(friends.size(),0);
        vis[id]=1;
        q.push(id);
        int k=0;
        while(!q.empty()&& level>k){
            int sz=q.size();
            while(sz--){
                int node=q.front();
                q.pop();
                
                for(int it: friends[node]){
                    if(vis[it]==0){
                        vis[it]=1;
                        q.push(it);
                    }
                }

            }
            k++;
        }
        // we got people curr level at k
        //store freq
        unordered_map<string,int>mp;
        while(!q.empty()){
          int node=q.front();
          q.pop();
          for(string it:watchedVideos[node]){
            mp[it]++;
          }

        }
        vector<pair<string,int>>list;
        for(auto it:mp){
            list.push_back({it.first,it.second});
        }
        sort(list.begin(),list.end(),cmp);
        vector<string>ans;
        for(auto it:list){
            ans.push_back(it.first);
        }
return ans;
    }
};