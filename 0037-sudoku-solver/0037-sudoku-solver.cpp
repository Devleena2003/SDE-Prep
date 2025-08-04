class Solution {
public:
 bool isValid(vector<vector<char>>& board, int r, int c, char ch) {
        for (int i = 0; i < 9; i++) {
            if (board[i][c] == ch) return false;  // Check column
            if (board[r][i] == ch) return false;  // Check row
            if (board[3 * (r / 3) + i / 3][3 * (c / 3) + i % 3] == ch) return false;  // Check box
        }
        return true;
    }

    // Backtracking recursive function
    bool solve(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') {
                    for (char c = '1'; c <= '9'; c++) {
                        if (isValid(board, i, j, c)) {
                            board[i][j] = c;  // Place the number

                            if (solve(board))  // Recurse
                                return true;

                            board[i][j] = '.';  // ❗Backtrack if not valid
                        }
                    }
                    return false;  // If no number fits, return false
                }
            }
        }
        return true;  // All cells are filled
    }

    void solveSudoku(vector<vector<char>>& board) {
        solve(board);  // Start solving
    }
    
};