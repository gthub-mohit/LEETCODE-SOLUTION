/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : find-a-peak-element-ii                                      ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : October 18, 2026                                            ║
 ║  URL      : https://leetcode.com/problems/find-a-peak-element-ii/submissions/2175318759/║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        int l = 0;
        int r = n - 1;
        while(l <= r) {
            int mid = l + (r - l) / 2;
            int maxi = 0;
            int x = 0;
            for(int i = 0; i < m; i++) {
                if(mat[i][mid] > maxi) {
                    maxi = mat[i][mid];
                    x = i;
                }
            }
            int left = -1;
            int right = -1;
            if(mid > 0) left = mat[x][mid - 1];
            if(mid < n - 1)right = mat[x][mid + 1];
            if(maxi > left && maxi > right) return {x, mid};
            else if(left > maxi) r = mid - 1;
            else l = mid + 1;
        }
        return {-1, -1};
    }
};