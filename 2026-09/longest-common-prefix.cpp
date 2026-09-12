/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : longest-common-prefix                                       ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : September 12, 2026                                          ║
 ║  URL      : https://leetcode.com/problems/longest-common-prefix/submissions/2139201709/║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        string s="";
        int mini=strs[0].size();
        for(int k=0;k<n;k++){
            if(strs[k].size()<mini)mini=strs[k].size();
        }
        for(int k=0;k<mini;k++){
            char ch=strs[0][k];
            for(int j=0;j<n;j++){
                if(strs[j][k]!=ch)return s;
            }
            s+=ch;
        }
        return s;
    }
};