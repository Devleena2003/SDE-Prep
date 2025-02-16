class Solution {
public:
  bool backtrack(std::vector<int>& result, std::vector<bool>& used, int n, int index) {
        if (index == result.size()) {
            return true; 
        }

        if (result[index] != 0) {
            return backtrack(result, used, n, index + 1); 
        }

     
        for (int num = n; num >= 1; num--) {
            if (!used[num]) {
              
                if (num == 1) {
                    result[index] = num;
                    used[num] = true;
                } else {
                    int nextIndex = index + num; 
                    if (nextIndex < result.size() && result[nextIndex] == 0) {
                       
                        result[index] = num;
                        result[nextIndex] = num;
                        used[num] = true;
                    } else {
                        continue; 

                    }
                }

              
                if (backtrack(result, used, n, index + 1)) {
                    return true; 
                }

            
                result[index] = 0;
                if (num == 1) {
                    used[num] = false;
                } else {
                    int nextIndex = index + num;
                    result[nextIndex] = 0;
                    used[num] = false;
                }
            }
        }

        return false;
    }
    vector<int> constructDistancedSequence(int n) {
      vector<int> result(2 * n - 1, 0); 
     vector<bool> used(n + 1, false); 
        backtrack(result, used, n, 0);
        return result;
    }
};