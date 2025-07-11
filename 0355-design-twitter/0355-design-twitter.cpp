class Twitter {
public:
  unordered_map<int,set<int>> follower;
    unordered_map<int,vector<pair<int,int>>> tweetmap;
    int time;
    Twitter() {
         time = 0;  
    }
    
    void postTweet(int userId, int tweetId) {
       time++;
        tweetmap[userId].push_back({time,tweetId});  
    }
    
    vector<int> getNewsFeed(int userId) {
          vector<int> result;
        priority_queue<pair<int,int>> pq;
        if(tweetmap.find(userId)!=tweetmap.end()){
            for(int i = 0; i < tweetmap[userId].size(); i++){
                pq.push(tweetmap[userId][i]);
            }
        }

        for(auto  it : follower[userId]){
            if(tweetmap.find(it)!=tweetmap.end()){
                for(int i = 0; i < tweetmap[it].size(); i++){
                    pq.push(tweetmap[it][i]);
                }
            }
        }

        while(!pq.empty() && result.size()<10){
            result.push_back(pq.top().second);
            pq.pop();
        }

        return result; 
    }
    
    void follow(int followerId, int followeeId) {
         follower[followerId].insert(followeeId);
    }
    
    void unfollow(int followerId, int followeeId) {
        follower[followerId].erase(followeeId);
    }
};

/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter* obj = new Twitter();
 * obj->postTweet(userId,tweetId);
 * vector<int> param_2 = obj->getNewsFeed(userId);
 * obj->follow(followerId,followeeId);
 * obj->unfollow(followerId,followeeId);
 */