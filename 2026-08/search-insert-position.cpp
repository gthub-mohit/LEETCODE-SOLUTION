/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : search-insert-position                                      ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 12, 2026                                             ║
 ║  URL      : https://leetcode.com/problems/search-insert-position/submissions/2103420142/║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int high=n-1;
        int low=0;
        int ans=n;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]>=target){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
};