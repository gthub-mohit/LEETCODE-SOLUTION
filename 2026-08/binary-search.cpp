/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : binary-search                                               ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 12, 2026                                             ║
 ║  URL      : https://leetcode.com/problems/binary-search/submissions/2103416326/║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int high=n-1;
        int low=0;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target)return mid;
            if(nums[mid]>target)high=mid-1;
            else low=mid+1;
        }
        return -1;
    }
};