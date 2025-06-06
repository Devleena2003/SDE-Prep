class Solution {
public:
    int longestConsecutive(vector<int>& a) {
       sort(a.begin(),a.end());
      int lastSmaller = INT_MIN;
    int cnt = 0;
    int longest = 0;
    int n=a.size();

    //find longest sequence:
    for (int i = 0; i < n; i++) {
        if (a[i] - 1 == lastSmaller) {
            //a[i] is the next element of the
            //current sequence.
            cnt += 1;
            lastSmaller = a[i];
        }
        else if (a[i] != lastSmaller) {
            cnt = 1;
            lastSmaller = a[i];
        }
        longest = max(longest, cnt);
    }
    return longest;
    }
};