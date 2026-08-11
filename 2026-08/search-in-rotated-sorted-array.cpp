/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : search-in-rotated-sorted-array                              ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 12, 2026                                             ║
 ║  URL      : https://leetcode.com/problems/search-in-rotated-sorted-array/submissions/2103413444/║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    int search(vector<int>& arr, int target) {
        int low=0;
        int n=arr.size();
        int high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]==target)return mid;
            if(arr[low]<=arr[mid]){
                if(target>=arr[low] && target<=arr[mid])high=mid-1;
                else low=mid+1;
            }
            else{
                if(target>=arr[mid] && target <=arr[high])low=mid+1;
                else high=mid-1;
            }
        }
        return -1;
    }
};