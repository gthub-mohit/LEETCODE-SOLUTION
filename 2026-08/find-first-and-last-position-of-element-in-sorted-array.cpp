/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : find-first-and-last-position-of-element-in-sorted-array     ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 13, 2026                                             ║
 ║  URL      : https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/submissions/2104649303/║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    int findfirst(vector<int>& nums , int target){
        int n=nums.size();
        int low=0;
        int high=n-1;
        int ans=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target){
                ans=mid;
                high=mid-1;
            }
            else if(nums[mid]<=target){
                low=mid+1;
            }
            else high=mid-1;
        }
        return ans;
    }
    int findlast(vector<int>& nums , int target){
        int n=nums.size();
        int high=n-1;
        int low=0;
        int ans=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target){
                ans=mid;
                low=mid+1;
            }
            else if(nums[mid]<=target) low=mid+1;
            else high=mid-1;
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        return{findfirst(nums , target) , findlast(nums , target)};
    }
};