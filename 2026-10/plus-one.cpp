/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : plus-one                                                    ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : October 18, 2026                                            ║
 ║  URL      : https://leetcode.com/problems/plus-one/submissions/2175373957/?envType=problem-list-v2&envId=array║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

        for(int k = n-1; k >= 0; k--) {
            if(digits[k] < 9) {
                digits[k]++;
                return digits;
            }

            digits[k] = 0;
        }

        digits.insert(digits.begin(), 1);
        return digits;
    }
};