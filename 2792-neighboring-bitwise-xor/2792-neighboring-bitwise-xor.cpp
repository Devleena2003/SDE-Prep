class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int res=0;
       for(auto it:derived) {
        res^=it;
       };
       if(res==0) return true;
       else return false;
    }
};