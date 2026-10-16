/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : combination-sum                                             ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : October 16, 2026                                            ║
 ║  URL      : https://leetcode.com/problems/combination-sum/submissions/2173968151/?envType=problem-list-v2&envId=array║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    vector<vector<int>> ans;
    vector<int> v;
    void solve(vector<int>& candidates, int target, int i) {
        if(target == 0) {
            ans.push_back(v);
            return;
        }
        if(target < 0 || i == candidates.size()) return;
        v.push_back(candidates[i]);
        solve(candidates, target - candidates[i], i);
        v.pop_back();
        solve(candidates, target, i + 1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        solve(candidates, target, 0);
        return ans;
    }
};