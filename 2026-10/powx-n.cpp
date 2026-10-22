/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : powx-n                                                      ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : October 22, 2026                                            ║
 ║  URL      : https://leetcode.com/problems/powx-n/submissions/2178804015/║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
private:
    double solve(double x, long long n) {
        if (n == 0) return 1.0;
        double half = solve(x, n / 2);
        if (n % 2 == 0) {
            return half * half;
        } else {
            return half * half * x;
        }
    }
public:
    double myPow(double x, int n) {
        long long p = n;
        if (p < 0) {
            return 1.0 / solve(x, -p);
        }
        return solve(x, p);
    }
};