/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : length-of-last-word                                         ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : November 11, 2026                                           ║
 ║  URL      : https://leetcode.com/problems/length-of-last-word/submissions/2193997247/║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size();
        int count=0;
        for(int k=n-1;k>=0;k--){
            if(s[k]==' '  && count)break;
            if(s[k]==' ')continue;
            else count++;
        }
        return count;
    } 
};