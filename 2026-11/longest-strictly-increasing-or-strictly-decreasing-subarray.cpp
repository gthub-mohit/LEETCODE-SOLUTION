/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : longest-strictly-increasing-or-strictly-decreasing-subarray ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : November 12, 2026                                           ║
 ║  URL      : https://leetcode.com/problems/longest-strictly-increasing-or-strictly-decreasing-subarray/submissions/2194518489/?envType=daily-question&envId=2026-11-12║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    int longestMonotonicSubarray(vector<int>& arr) {
        int n =arr.size();
        int count1=1;
        int count2=1;int maxi=1;
        for(int k=0;k<n-1;k++){
            if(arr[k]<arr[k+1]){
                count1++;
                count2=1;
                maxi=max(maxi,max(count1,count2));
            }
            else if(arr[k]==arr[k+1]){
                count1=1;
                count2=1;
            }
            else{
                count2++;
                count1=1;
                maxi=max(maxi,max(count1,count2));
            }
        }
        return maxi;
    }
};