/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : 3sum                                                        ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : September 24, 2026                                          ║
 ║  URL      : https://leetcode.com/problems/3sum/submissions/2152074879/  ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin() , nums.end());
        vector<vector<int>> ans;
        for(int k=0;k<n;k++){
            if(k>0 && nums[k]==nums[k-1]) continue;
            int left = k+1;
            int right =n-1;
            while(left<right){
            if(nums[k]+nums[left]+nums[right]<0)left++;
            else if(nums[k]+nums[left]+nums[right]>0)right--;
            else {
                ans.push_back({nums[k] , nums[right] , nums[left]});
                while(left<right && nums[left]==nums[left+1]) left++;
                while(left<right && nums[right]==nums[right-1]) right--;
                left++;
                right--;
            }
            }
        }
        return ans;
    }
};