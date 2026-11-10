/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : best-time-to-buy-and-sell-stock                             ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : November 10, 2026                                           ║
 ║  URL      : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/submissions/2193336400/║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int n=arr.size();
        int maxi=0;
        int mini=INT_MAX; 
        int profit=0;
        for(int k=0;k<n;k++){
            if(arr[k]<mini)mini=arr[k];
            profit=arr[k]-mini;
            maxi=max(maxi , profit);
        }
        return maxi;
    }
};