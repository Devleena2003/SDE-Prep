class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
       map<string,int>mp;
       int indexSum=INT_MAX;
       vector<string>res;
       for(int i=0;i<list1.size();i++) mp[list1[i]]=i; 
       for(int i=0;i<list2.size();i++){
       if(mp.find(list2[i])!=mp.end()){
         if(i+mp[list2[i]]<=indexSum){
            if(indexSum!=i+mp[list2[i]]) if(!res.empty()) res.clear();
            indexSum=i+mp[list2[i]];
          res.push_back(list2[i]);
         }

       }
      
       }
       return res;
    }
};