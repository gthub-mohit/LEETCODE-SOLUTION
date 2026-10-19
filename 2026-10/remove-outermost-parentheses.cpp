/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : remove-outermost-parentheses                                ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : October 19, 2026                                            ║
 ║  URL      : https://leetcode.com/problems/remove-outermost-parentheses/submissions/2176108033/║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    string removeOuterParentheses(string s) {
        int n=s.length();
        int count=0;
        string ans="";
        for(int k=0;k<n;k++){
            if(s[k]=='('){
                if(count>0)ans+=s[k];
                count++;
            }
            else{
                count--;
                if(count>0)ans+=s[k];
            }
        }
        return ans;
    }
};