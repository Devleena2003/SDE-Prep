class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
       vector<int>mp(10,0);
       int n=digits.size();
       for(int i=0;i<n;i++){
        mp[digits[i]]++;
       } 
       vector<int>ans;
       for(int i=1;i<=9;i++){
        if(mp[i]==0) continue;
        mp[i]--;

        for(int j=0;j<=9;j++){
            if(mp[j]==0) continue;
            mp[j]--;

            for(int k=0;k<=8;k+=2){
                if(mp[k]==0) continue;
                ans.push_back(i*100+j*10+k);
            }
            mp[j]++;
        }
        mp[i]++;
       }
       return ans;
    }
};