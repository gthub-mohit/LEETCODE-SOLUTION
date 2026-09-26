/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : remove-duplicates-from-sorted-array-ii                      ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : September 26, 2026                                          ║
 ║  URL      : https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/submissions/2154232635/║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(n<=2)return n;
        int i=2;
        for(int k=2;k<n;k++){
            if(nums[k]!=nums[i-2]){
                nums[i]=nums[k];
                i++;
            }
        }
        return i;
    }
};