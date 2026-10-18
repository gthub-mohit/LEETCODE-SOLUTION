/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : find-a-peak-element-ii                                      ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : October 18, 2026                                            ║
 ║  URL      : https://leetcode.com/problems/find-a-peak-element-ii/submissions/2175284276/║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int maxi=mat[0][0];
        int x=0;
        int y=0;
        for(int k=0;k<n;k++){
            for(int j=0;j<m;j++){
                if(mat[k][j]>maxi){
                    maxi=mat[k][j];
                    x=k;
                    y=j;
                }
            }
        }
        return {x,y};
    }
};