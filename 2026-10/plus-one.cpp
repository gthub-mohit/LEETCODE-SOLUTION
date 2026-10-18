/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : plus-one                                                    ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : October 18, 2026                                            ║
 ║  URL      : https://leetcode.com/problems/plus-one/submissions/2175373739/?envType=problem-list-v2&envId=array║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        string nums = "";

        for(int k = 0; k < n; k++) {
            nums += to_string(digits[k]);
        }

        int k = nums.size() - 1;

        while(k >= 0 && nums[k] == '9') {
            nums[k] = '0';
            k--;
        }

        if(k >= 0) {
            nums[k]++;
        }
        else {
            nums = "1" + nums;
        }

        vector<int> v2;

        for(int k = 0; k < nums.size(); k++) {
            v2.push_back(nums[k] - '0');
        }

        return v2;
    }
};