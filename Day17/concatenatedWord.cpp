class Solution {
public:
    unordered_set<string> s;
    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
        vector<string> res;
        for(string& w:words)
          s.insert(w);
        for(string& w:words)
        {
            if(check(w,0,0))
              res.push_back(w);
        }
        return res;
    }
    bool check(string& word,int ind,int cnt)
    {
        if(ind==word.size())
        {
            if(cnt>=2) return true;
            return false;
        }
        string t="";
        for(int i=ind;i<word.size();i++)
        {
            t+=word[i];
            if(s.count(t) && check(word,i+1,cnt+1))
             return true;
        }
        return false;
    }
};