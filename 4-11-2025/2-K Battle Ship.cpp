class BattleShip {
    public final int rowAttack;
    public final int columnAttack;
    public final int diagonalAttack;

    public BattleShip(int r, int c, int d) {
        this.rowAttack = r;
        this.columnAttack = c;
        this.diagonalAttack = d;
    }
}

public class Solution {
    public boolean isPossible(int m, int n, BattleShip[] ships) {
        if (ships.length > m * n) return false;

        boolean[][] attacked = new boolean[m][n];
        return backtrack(0, ships, attacked, m, n);
    }

    private boolean backtrack(int idx, BattleShip[] ships, boolean[][] attacked, int m, int n) {
        if (idx == ships.length) return true;  // all ships placed

        BattleShip ship = ships[idx];

        for (int r = 0; r < m; r++) {
            for (int c = 0; c < n; c++) {
                if (!attacked[r][c]) {
                    boolean[][] backup = copy(attacked);
                    markAttack(attacked, r, c, ship, m, n);

                    if (backtrack(idx + 1, ships, attacked, m, n))
                        return true;

                    attacked = backup;  // backtrack
                }
            }
        }
        return false;
    }

    private void markAttack(boolean[][] attacked, int r, int c, BattleShip s, int m, int n) {
        attacked[r][c] = true;

        // row attack
        for (int i = -s.rowAttack; i <= s.rowAttack; i++) {
            int cc = c + i;
            if (cc >= 0 && cc < n) attacked[r][cc] = true;
        }

        // column attack
        for (int i = -s.columnAttack; i <= s.columnAttack; i++) {
            int rr = r + i;
            if (rr >= 0 && rr < m) attacked[rr][c] = true;
        }

        // diagonal attack
        for (int i = -s.diagonalAttack; i <= s.diagonalAttack; i++) {
            int rr = r + i, cc1 = c + i, cc2 = c - i;
            if (rr >= 0 && rr < m && cc1 >= 0 && cc1 < n) attacked[rr][cc1] = true;
            if (rr >= 0 && rr < m && cc2 >= 0 && cc2 < n) attacked[rr][cc2] = true;
        }
    }

    private boolean[][] copy(boolean[][] board) {
        int m = board.length, n = board[0].length;
        boolean[][] newBoard = new boolean[m][n];
        for (int i = 0; i < m; i++)
            newBoard[i] = board[i].clone();
        return newBoard;
    }
}
