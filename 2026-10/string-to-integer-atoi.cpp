/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : string-to-integer-atoi                                      ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : October 21, 2026                                            ║
 ║  URL      : https://leetcode.com/problems/string-to-integer-atoi/submissions/2177838428/║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */


class Solution {
public:
    int myAtoi(string input) {
        int n=input.length();
        int found=false;
        int sign=1;
        long long ans=0;
        int k=0;
        while(k<n && input[k]==' ') k++;
        if(k<n && input[k]=='-'){
            sign=-1;
            k++;
        }
        else if(k<n && input[k]=='+') k++;
        while(k<n){
            if(input[k]>='0' && input[k]<='9'){
                found=true;
                int digit=input[k]-'0';
                if(ans>(2147483647LL-digit)/10){
                    if(sign==1) return 2147483647;
                    else return -2147483647-1;
                }
                ans=ans*10+digit;
                k++;
            }
            else break;
        }
        if(!found) return 0;
        return ans*sign;
    }
};
