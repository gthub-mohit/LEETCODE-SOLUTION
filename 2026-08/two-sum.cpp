/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : two-sum                                                     ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 16, 2026                                             ║
 ║  URL      : https://leetcode.com/problems/two-sum/submissions/2109228829/║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<pair<int, int>> indexed_nums(n);
        for (int i = 0; i < n; ++i) {
            indexed_nums[i] = {nums[i], i};
        }
        sort(indexed_nums.begin(), indexed_nums.end());
        int left = 0;
        int right = n - 1;
        while (left < right) {
            int sum = indexed_nums[left].first + indexed_nums[right].first;
            if (sum == target) {
                return {indexed_nums[left].second, indexed_nums[right].second};
            } else if (sum > target) right--; 
            else left++;  
        }
        return {};
    }
};