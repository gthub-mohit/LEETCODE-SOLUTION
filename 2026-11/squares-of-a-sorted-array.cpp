/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : squares-of-a-sorted-array                                   ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : November 13, 2026                                           ║
 ║  URL      : https://leetcode.com/problems/squares-of-a-sorted-array/submissions/2195252608/║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int k=0;k<nums.size();k++){
            nums[k]*=nums[k];
        }
        sort(nums.begin() , nums.end());
        return nums;
    }
};