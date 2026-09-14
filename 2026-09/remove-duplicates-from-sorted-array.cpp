/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : remove-duplicates-from-sorted-array                         ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : September 14, 2026                                          ║
 ║  URL      : https://leetcode.com/problems/remove-duplicates-from-sorted-array/submissions/2141811319/║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int ans=1;
        for(int k=0;k<n;k++){
            if(nums[k]!=nums[ans-1]){
                nums[ans]=nums[k];
                ans++;
            }
        }
        return ans;
    }
};