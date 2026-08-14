/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : single-number                                               ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 14, 2026                                             ║
 ║  URL      : https://leetcode.com/problems/single-number/submissions/2106649787/?envType=problem-list-v2&envId=array║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int it : nums) ans^=it;
        return ans;
    }
};