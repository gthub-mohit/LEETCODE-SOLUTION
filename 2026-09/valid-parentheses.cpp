/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : valid-parentheses                                           ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : September 13, 2026                                          ║
 ║  URL      : https://leetcode.com/problems/valid-parentheses/submissions/2140568057/║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    bool isValid(string s) {
        int n=s.length();
        stack<char> set;
        for(int k=0;k<n;k++){
            if(s[k]=='(' || s[k]=='[' || s[k]=='{')set.push(s[k]);
            else {
                if(set.empty())return false;
                if(s[k]=='}' && set.top()!='{')return false;
                if(s[k]==')' && set.top()!='(')return false;
                if(s[k]==']' && set.top()!='[')return false;
                set.pop();
            }
        }
        if(set.empty())return true;
        else return false;
    }
};