/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : longest-substring-without-repeating-characters              ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 23, 2026                                             ║
 ║  URL      : https://leetcode.com/problems/longest-substring-without-repeating-characters/submissions/2117592100/║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        unordered_set<char> set;
        int count = 0, maxi = 0;
        int left = 0;
        for(int k = 0; k < n; k++) {
            while(set.find(s[k]) != set.end()) {
                set.erase(s[left]);
                left++;
                count--;
            }
            set.insert(s[k]);
            count++;
            maxi=max(maxi, count);
        }
        return maxi;
    }
};