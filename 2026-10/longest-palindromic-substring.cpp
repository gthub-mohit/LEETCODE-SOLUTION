/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : longest-palindromic-substring                               ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : October 21, 2026                                            ║
 ║  URL      : https://leetcode.com/problems/longest-palindromic-substring/submissions/2177840934/║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */


class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        int start = 0, len = 1;

        for(int k = 0; k < n; k++) {
            int l = k, r = k;

            while(l >= 0 && r < n && s[l] == s[r]) {
                if(r - l + 1 > len) {
                    start = l;
                    len = r - l + 1;
                }
                l--;
                r++;
            }

            l = k;
            r = k + 1;

            while(l >= 0 && r < n && s[l] == s[r]) {
                if(r - l + 1 > len) {
                    start = l;
                    len = r - l + 1;
                }
                l--;
                r++;
            }
        }

        return s.substr(start, len);
    }
};
