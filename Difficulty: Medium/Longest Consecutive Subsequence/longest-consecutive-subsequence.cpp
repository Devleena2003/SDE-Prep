class Solution {
  public:

    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        // Your code here
        int longest=INT_MIN;
        int count=0;
        int start=-1;
        int curr;
        set<int>st(arr.begin(),arr.end());
        for(int it:arr){
         
            if(st.find(it-1)==st.end()){
                curr=it;
                count=1;
            }
            while(st.find(curr+1)!=st.end()){
                curr++;
                count++;
            }
            if(longest<count){
                longest=count;
                start=it;
            }
        }
        return longest;
    }
};