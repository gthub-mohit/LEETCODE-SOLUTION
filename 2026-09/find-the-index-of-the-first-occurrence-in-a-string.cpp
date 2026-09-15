/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : find-the-index-of-the-first-occurrence-in-a-string          ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : September 15, 2026                                          ║
 ║  URL      : https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/submissions/2142843114/║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.length();
        int m = needle.length();
        for(int k = 0; k <= n - m; k++) {
            int count = 0;
            for(int i = 0; i < m; i++) {
                if(haystack[k + i] == needle[i]) {
                    count++;
                }
                else break;
            }
            if(count == m) return k;
        }
        return -1;
    }
};