/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : roman-to-integer                                            ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : October 20, 2026                                            ║
 ║  URL      : https://leetcode.com/problems/roman-to-integer/submissions/2177304784/║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    int romanToInt(string s) {
        int n = s.length();
        int ans = 0;
        for(int k = 0; k < n; k++) {
            int a, b;
            if(s[k] == 'I') a = 1;
            else if(s[k] == 'V') a = 5;
            else if(s[k] == 'X') a = 10;
            else if(s[k] == 'L') a = 50;
            else if(s[k] == 'C') a = 100;
            else if(s[k] == 'D') a = 500;
            else a = 1000;
            if(k + 1 < n) {
                if(s[k+1] == 'I') b = 1;
                else if(s[k+1] == 'V') b = 5;
                else if(s[k+1] == 'X') b = 10;
                else if(s[k+1] == 'L') b = 50;
                else if(s[k+1] == 'C') b = 100;
                else if(s[k+1] == 'D') b = 500;
                else b = 1000;
                if(a < b) ans -= a;
                else ans += a;
            }
            else ans += a;
        }
        return ans;
    }
};