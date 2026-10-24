/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : subsets                                                     ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : October 24, 2026                                            ║
 ║  URL      : https://leetcode.com/problems/subsets/submissions/2180317244/║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */


class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        int target = 1 << n;
        vector<vector<int>> ans;
        for(int k = 0; k < target; k++) {
            vector<int> arr;
            for(int j = 0; j < n; j++) {
                if(k & (1 << j)) arr.push_back(nums[j]);
            }
            ans.push_back(arr);
        }
        return ans;
    }
};
