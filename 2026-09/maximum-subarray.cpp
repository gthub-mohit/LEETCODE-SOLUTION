/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : maximum-subarray                                            ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : September 24, 2026                                          ║
 ║  URL      : https://leetcode.com/problems/maximum-subarray/submissions/2152049329/║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int maxi=INT_MIN;
        for(int k=0;k<n;k++){
            sum+=nums[k];
            if(sum>maxi)maxi=sum;
            if (sum<0)sum=0;
        }
        return maxi;
    }
};