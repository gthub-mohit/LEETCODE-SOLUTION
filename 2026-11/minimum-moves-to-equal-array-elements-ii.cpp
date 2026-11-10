/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : minimum-moves-to-equal-array-elements-ii                    ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : November 10, 2026                                           ║
 ║  URL      : https://leetcode.com/problems/minimum-moves-to-equal-array-elements-ii/submissions/2193033202/?envType=daily-question&envId=2026-11-02║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin() , nums.end());int x;
        if(n%2==1)x=nums[(n)/2];
        else x=nums[(n/2+((n/2)+1))/2];int sum=0;
        for(int k=0;k<n;k++){
            sum+=abs(nums[k]-x);
        }
        return sum;
    }
};