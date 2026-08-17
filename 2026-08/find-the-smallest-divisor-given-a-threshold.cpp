/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : find-the-smallest-divisor-given-a-threshold                 ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 17, 2026                                             ║
 ║  URL      : https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/submissions/2110176675/║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    int check(vector<int>& nums , int x){
        int sum=0;
        int n=nums.size();
        for(int k=0;k<n;k++){
            sum+=(nums[k]+x-1)/x;
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        int low=1;
        int high=*max_element(nums.begin() , nums.end());
        int ans=0;
        while(low<=high){
            int mid=(low+high)/2;
            if(check(nums , mid)<=threshold){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
};