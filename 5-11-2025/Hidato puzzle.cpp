#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> board;
vector<int> given_vals;
pair<int,int> startPos = {-1,-1};

void setup_board(const string &s) {
    vector<string> lines;
    stringstream ss(s);
    string line;

    // Split into lines
    while (getline(ss, line)) {
        if (!line.empty()) lines.push_back(line);
    }

    int nrows = lines.size();
    int ncols = 0;

    {
        stringstream temp(lines[0]);
        string x;
        while (temp >> x) ncols++;
    }

    board.assign(nrows + 2, vector<int>(ncols + 2, -1));

    for (int r = 0; r < nrows; r++) {
        stringstream ss2(lines[r]);
        string cell;
        int c = 0;

        while (ss2 >> cell) {
            if (cell == "__") {
                board[r+1][c+1] = 0;
            }
            else if (cell == ".") {
                // keep -1 (blocked)
            }
            else {
                int val = stoi(cell);
                board[r+1][c+1] = val;
                given_vals.push_back(val);
                if (val == 1) startPos = {r+1, c+1};
            }
            c++;
        }
    }

    sort(given_vals.begin(), given_vals.end());
}

bool solve_dfs(int r, int c, int n, int nextIdx = 0) {
    int lastGiven = given_vals.back();

    if (n > lastGiven) return true;

    // If board has fixed value and does not match required number
    if (board[r][c] != -1 && board[r][c] != n) return false;

    // If board is empty (0) but expected a given number
    if (board[r][c] == 0 && given_vals[nextIdx] == n) return false;

    int backup = 0;

    if (board[r][c] == n) {
        nextIdx++;
        backup = n;
    }

    board[r][c] = n;

    for (int i = -1; i <= 1; i++) {
        for (int j = -1; j <= 1; j++) {
            if (solve_dfs(r + i, c + j, n + 1, nextIdx))
                return true;
        }
    }

    board[r][c] = backup;
    return false;
}

void print_board() {
    int bmax = 0;
    for (auto &row : board)
        for (int c : row)
            bmax = max(bmax, c);

    int width = to_string(bmax).size() + 1;

    for (int r = 1; r < board.size() - 1; r++) {
        for (int c = 1; c < board[0].size() - 1; c++) {
            if (board[r][c] == -1) cout << setw(width) << "  ";
            else if (board[r][c] == 0) cout << setw(width) << "__";
            else cout << setw(width) << board[r][c];
        }
        cout << "\n";
    }
}

int main() {
    string hi =
        "__ 33 35 __ __ . . .\n"
        "__ __ 24 22 __ . . .\n"
        "__ __ __ 21 __ __ . .\n"
        "__ 26 __ 13 40 11 . .\n"
        "27 __ __ __ 9 __ 1 .\n"
        ". . __ __ 18 __ __ .\n"
        ". . . . __ 7 __ __\n"
        ". . . . . . 5 __";

    setup_board(hi);

    cout << "Initial board:\n";
    print_board();

    cout << "\nSolving...\n\n";

    solve_dfs(startPos.first, startPos.second, 1);

    print_board();

    return 0;
}
