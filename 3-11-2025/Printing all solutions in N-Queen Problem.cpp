//C++ program to find all solution of N queen problem 
//using recursion
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Function to check if the current placement is safe
bool isSafe(vector<int>& board, int currRow,
                                      int currCol) {

    // Check all previously placed queens
    for(int i = 0; i < board.size(); ++i) {
        int placedRow = board[i];

        // Columns are 1-based
        int placedCol = i + 1;

        // Check if the queen is on the same diagonal
        if(abs(placedRow - currRow) == abs(placedCol - currCol)) {
            return false; // Not safe
        }
    }

    // Safe to place the queen
    return true; 
}

// Recursive function to generate all possible permutations
void nQueenUtil(int col, int n, vector<int>& board, 
  	vector<vector<int>>& res, vector<bool>& visited) {

    // If all queens are placed, add into res
    if(col > n) {
        res.push_back(board);
        return;
    }

    // Try placing a queen in each row
    // of the current column
    for(int row = 1; row <= n; ++row) {

        // Check if the row is already used
        if(!visited[row]) {
            
            // Check if it's safe to place the queen
            if(isSafe(board, row, col)) {

                // Mark the row as used
                visited[row] = true; 

                // Place the queen
                board.push_back(row); 

                // Recur to place the next queen
                nQueenUtil(col + 1, n, board,
                             res, visited);

                // Backtrack: remove the queen
                board.pop_back(); 
                
                // Unmark row
                visited[row] = false; 
            }
        }
    }
}

// Main function to find all distinct 
// res to the n-queens puzzle
vector<vector<int>> nQueen(int n) {
    vector<vector<int>> res; 

    // Current board configuration
    vector<int> board; 

    // Track used rows
    vector<bool> visited(n + 1, false); 

    // Start solving from the first column
    nQueenUtil(1, n, board, res, visited);
    return res; 
}

int main() {
    int n = 4; 
    vector<vector<int>> res = nQueen(n); 

    for(int i = 0;i < res.size(); i++) {
        cout << "[";
        for(int j = 0; j < n; ++j) {
            cout << res[i][j]; 
            if(j != n - 1)   cout << " "; 
        }
        cout << "]\n";
    }
    return 0;
}
