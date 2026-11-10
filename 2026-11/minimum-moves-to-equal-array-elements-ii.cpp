/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : minimum-moves-to-equal-array-elements-ii                    ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : November 10, 2026                                           ║
 ║  URL      : https://leetcode.com/problems/minimum-moves-to-equal-array-elements-ii/submissions/2193024767/?envType=daily-question&envId=2026-11-02║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n=nums.size();
        long long mini=LLONG_MAX;
        for(int k=0;k<n;k++){
            long long sum=0;
            for(int j=0;j<n;j++){
                sum+=abs(nums[k]-nums[j]);
            }
            mini=min(mini , sum);
        }
        return mini;
    }
};