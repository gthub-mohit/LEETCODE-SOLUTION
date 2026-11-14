/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : minimum-positive-sum-subarray                               ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : November 14, 2026                                           ║
 ║  URL      : https://leetcode.com/problems/minimum-positive-sum-subarray/submissions/2195984790/?envType=daily-question&envId=2026-11-14║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */


class Solution {
public:
    int minimumSumSubarray(vector<int>& arr, int l, int r) {
        int n = arr.size();
        int ans = INT_MAX;
        for(int len = l; len <= r; len++){
            for(int k = 0; k + len <= n; k++){
                int sum = 0;
                for(int j = k; j < k + len; j++){
                    sum += arr[j];
                }
                if(sum > 0){
                    ans = min(ans, sum);
                }
            }
        }
        if(ans == INT_MAX) return -1;
        return ans;
    }
};
