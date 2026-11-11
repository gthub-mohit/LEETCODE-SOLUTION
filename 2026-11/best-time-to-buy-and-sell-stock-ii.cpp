/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : best-time-to-buy-and-sell-stock-ii                          ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : November 11, 2026                                           ║
 ║  URL      : https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/?envType=problem-list-v2&envId=array║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int profit=0;
        for(int k=0;k<n-1;k++){
            if(prices[k+1]>prices[k]){
                profit+=prices[k+1]-prices[k];
            }
        }
        return profit;
    }
};