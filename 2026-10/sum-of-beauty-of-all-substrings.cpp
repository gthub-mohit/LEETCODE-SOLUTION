/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : sum-of-beauty-of-all-substrings                             ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : October 22, 2026                                            ║
 ║  URL      : https://leetcode.com/problems/sum-of-beauty-of-all-substrings/submissions/2178780870/║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    int beautySum(string s) {
        int n=s.length();
        int ans=0;
        for(int k=0;k<n;k++){
            int hash[26]={0};
            for(int j=k;j<n;j++){
                hash[s[j]-'a']++;
                int maxi=0 , mini=1000;
                for(int z=0;z<26;z++){
                    if(hash[z]>0){
                        maxi=max(maxi , hash[z]);
                        mini=min(mini , hash[z]);
                    }
                }
                ans+=maxi-mini;
            }
        }
        return ans;
    }
};