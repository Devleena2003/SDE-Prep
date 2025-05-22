// User function template for C++
class Solution {
  public:

    int shortestDistance(vector<string> &s, string word1, string word2) {
        // Your code goes here
      int index1 = -1, index2 = -1;
        int minDist = INT_MAX;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == word1) index1 = i;
            if (s[i] == word2) index2 = i;

            if (index1 != -1 && index2 != -1) {
                minDist = min(minDist, abs(index1 - index2));
            }
        }

        return minDist;
    }
};