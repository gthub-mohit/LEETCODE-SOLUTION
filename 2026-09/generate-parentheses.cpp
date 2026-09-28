/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : generate-parentheses                                        ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : September 28, 2026                                          ║
 ║  URL      : https://leetcode.com/problems/generate-parentheses/submissions/2156234501/║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    vector<string> ans;
    void solve(string a ,int open , int close ,  int n){
        if(open==n && close==n){ans.push_back(a); return ;}
        if(open<n)
            solve(a + '(', open + 1, close, n);
        if(close<open)
            solve(a + ')', open, close + 1, n);
    }
    vector<string> generateParenthesis(int n) {
        solve("", 0, 0, n);
        return ans;
    }
};