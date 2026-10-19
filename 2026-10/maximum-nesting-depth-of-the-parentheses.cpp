/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : maximum-nesting-depth-of-the-parentheses                    ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : October 19, 2026                                            ║
 ║  URL      : https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/submissions/2176094884/║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    int maxDepth(string s) {
        int n=s.length();
        int count=0;
        int maxi=INT_MIN;
        for(int k=0;k<n;k++){
            if(s[k]=='(')count++;
            else if(s[k]==')')count--;
            maxi=max(maxi , count);
        }
        return maxi;
    }
};