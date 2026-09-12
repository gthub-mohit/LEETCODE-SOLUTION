/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : search-a-2d-matrix-ii                                       ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : September 12, 2026                                          ║
 ║  URL      : https://leetcode.com/problems/search-a-2d-matrix-ii/        ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int row=0;
        int column=m-1;
        while(row<n && column>=0){
            if(matrix[row][column]==target)return true;
            else if(matrix[row][column]>target)column--;
            else row++;
        }
        return false;
    }
};