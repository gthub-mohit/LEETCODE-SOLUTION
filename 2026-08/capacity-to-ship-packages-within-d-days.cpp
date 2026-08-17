/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : capacity-to-ship-packages-within-d-days                     ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 17, 2026                                             ║
 ║  URL      : https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/submissions/2110197410/║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    int numberofdays(vector<int>& weights , int cap){
        int day=1;
        int load=0;
        int n=weights.size();
        for(int i=0;i<n;i++){
            if(load+weights[i]>cap){
                day=day+1;
                load=weights[i];
            }
            else load+=weights[i];
        }
        return day;
    }
    int shipWithinDays(vector<int>& nums, int days) {
        int low=*max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin() , nums.end() , 0);
        int n=nums.size();
        while(low<=high){
            int mid=(low+high)/2;
            int nodays=numberofdays(nums , mid);
            if(nodays<=days)high=mid-1;
            else low=mid+1;
        }
        return low;
    }
};