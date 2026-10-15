/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : valid-sudoku                                                ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : October 15, 2026                                            ║
 ║  URL      : https://leetcode.com/problems/valid-sudoku/submissions/2173207409/?envType=problem-list-v2&envId=array║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        set<char> row[9] , column [9] , grid[9];
        for(int k=0;k<9;k++){
            for(int j=0;j<9;j++){
                if(board[k][j]=='.')continue;
                char a=board[k][j];
                int z=(k/3)*3 + (j/3);
                if(row[k].count(a)||column[j].count(a)||grid[z].count(a))return false;
                row[k].insert(a);
                column[j].insert(a);
                grid[z].insert(a);
            }
        }
        return true;
    }
};