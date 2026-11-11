/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : minimum-cost-to-acquire-required-items                      ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : November 11, 2026                                           ║
 ║  URL      : https://leetcode.com/problems/minimum-cost-to-acquire-required-items/submissions/2193814525/?envType=daily-question&envId=2026-11-11║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long total=0;

        if(need1>need2){
            if(costBoth<cost1+cost2){
                total+=1LL*need2*costBoth;
            }
            else{
                total+=1LL*need2*(cost1+cost2);
            }

            need1-=need2;
            total+=1LL*need1*min(cost1,costBoth);
        }
        else{
            if(costBoth<cost1+cost2){
                total+=1LL*need1*costBoth;
            }
            else{
                total+=1LL*need1*(cost1+cost2);
            }

            need2-=need1;
            total+=1LL*need2*min(cost2,costBoth);
        }

        return total;
    }
};