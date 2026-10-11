/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : remove-element                                              ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : October 11, 2026                                            ║
 ║  URL      : https://leetcode.com/problems/remove-element/submissions/2169186875/║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int z=0;
        for(int k=0;k<nums.size();k++){
            if(nums[k]!=val){
                nums[z]=nums[k];
                z++;
            }
        }
        return z;
    }
};