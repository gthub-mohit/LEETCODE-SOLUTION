/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : 3sum-closest                                                ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : September 12, 2026                                          ║
 ║  URL      : https://leetcode.com/problems/3sum-closest/submissions/2139209239/║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin() , nums.end());
        int closest=nums[0]+nums[1]+nums[2];
        for(int k=0;k<n;k++){
            int left=k+1;
            int right=n-1;
            while(left<right){
            int sum=nums[k]+nums[left]+nums[right];
            if(abs(sum-target)<abs(target-closest))closest=sum;
            if(sum>target)right--;
            else left++;
            }
        }
        return closest;
    }
};