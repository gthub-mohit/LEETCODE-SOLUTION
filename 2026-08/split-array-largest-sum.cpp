/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : split-array-largest-sum                                     ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 21, 2026                                             ║
 ║  URL      : https://leetcode.com/problems/split-array-largest-sum/submissions/2115047395/║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    bool check(vector<int>& nums, int k, long long mid) {
        long long sum = 0;
        int cnt = 1;
        for (int i = 0; i < nums.size(); i++) {
            if (sum + nums[i] > mid) {
                cnt++;
                sum = nums[i];
            }
            else sum += nums[i];
        }
        return cnt <= k;
    }
    int splitArray(vector<int>& nums, int k) {
        long long lo = 0, hi = 0;
        for (int i = 0; i < nums.size(); i++) {
            lo = max(lo, (long long)nums[i]);
            hi += nums[i];
        }
        while (lo < hi) {
            long long mid = lo + (hi - lo) / 2;
            if (check(nums, k, mid)) {
                hi = mid;
            }
            else lo = mid + 1;
        }
        return lo;
    }
};