/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : squares-of-a-sorted-array                                   ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : November 13, 2026                                           ║
 ║  URL      : https://leetcode.com/problems/squares-of-a-sorted-array/submissions/2195259665/║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int j=n-1;
        int i=0;
        int k=n-1;
        vector<int> ans(n);
        while(j>=i){
            if(abs(nums[i])>abs(nums[j])){
                ans[k]=nums[i]*nums[i];
                i++;
            }
            else {
                ans[k]=nums[j]*nums[j];
                j--;
            }k--;
        }
        return ans;
    }
};