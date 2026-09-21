/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : count-and-say                                               ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : September 21, 2026                                          ║
 ║  URL      : https://leetcode.com/problems/count-and-say/                ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    string countAndSay(int n) {
        string s = "1";
        for(int i=1;i<n;i++) {
            string temp = "";
            for(int j = 0; j < s.size(); ) {
                int count=0;
                char ch=s[j];
                while(j<s.size() && s[j] == ch) {
                    count++;
                    j++;
                }
                temp += to_string(count);
                temp += ch;
            }
            s=temp;
        }
        return s;
    }
};