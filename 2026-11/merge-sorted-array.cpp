/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : merge-sorted-array                                          ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : November 12, 2026                                           ║
 ║  URL      : https://leetcode.com/problems/merge-sorted-array/submissions/2194668193/║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int k=n+m-1;
        int i=m-1;
        int j=n-1;
        while(j>=0){
            if(i>=0 && nums1[i]>=nums2[j]){
                nums1[k]=nums1[i];
                i--;
            }
            else{
                nums1[k]=nums2[j];
                j--;
            }
            k--;
        }
    }
};