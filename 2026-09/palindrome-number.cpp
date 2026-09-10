/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : palindrome-number                                           ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : September 11, 2026                                          ║
 ║  URL      : https://leetcode.com/problems/palindrome-number/submissions/2137883468/║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include<string>
class Solution {
public:
    bool isPalindrome(int x) {
        string s=to_string(x);
        int n=s.length();
        for(int k=0;k<n/2;k++){
            if(s[k]!=s[n-k-1]){
                return false;
            }
        }
        return true;    
    }
};