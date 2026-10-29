/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : first-missing-positive                                      ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : October 29, 2026                                            ║
 ║  URL      : https://leetcode.com/problems/first-missing-positive/submissions/2184939718/║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        int k=0;
        while(k<n){
            if(nums[k]>=1 && nums[k]<=n && nums[k]!=nums[nums[k]-1]) swap(nums[k] , nums[nums[k]-1]);
            else k++;
        }
        for(int k=0;k<n;k++){
            if(k+1!=nums[k]){
                return k+1;
                break;
            }
        }
        return n+1;
    }
};