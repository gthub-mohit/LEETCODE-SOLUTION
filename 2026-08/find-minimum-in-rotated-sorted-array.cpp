/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : find-minimum-in-rotated-sorted-array                        ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 12, 2026                                             ║
 ║  URL      : https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/submissions/2104614068/║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int high=n-1;
        int low=0;
        int ans=INT_MAX;
        while(low<=high){
            int mid = (low + high)/2;
            ans=min(ans,nums[mid]);
            if(nums[low]<=nums[mid]){
                ans=min(ans,nums[low]);
                low=mid+1;
            }
            else{
                ans=min(ans , nums[high]);
                high=mid-1;
            }
        }
        return ans;
    }
};