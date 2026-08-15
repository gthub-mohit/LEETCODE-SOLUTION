/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : minimum-number-of-days-to-make-m-bouquets                   ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 15, 2026                                             ║
 ║  URL      : https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/submissions/2107408031/║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    bool possible(vector<int>& bloomDay , int m , int z , int days){
        int n=bloomDay.size();
        int count=0;
        int bouquet=0;
        for(int k=0;k<n;k++){
            if(bloomDay[k]<=days){
                count++;
            }
            else {
                bouquet+=count/z;
                count=0;
            }
        }
        bouquet+=count/z;
        if(bouquet>=m)return true;
        else return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        if((long long)m * k > bloomDay.size())
        return -1;
        int low= *min_element(bloomDay.begin(), bloomDay.end());
        int high= *max_element(bloomDay.begin() , bloomDay.end());
        int ans=0;
        while(low<=high){
            int mid=(low+high)/2;
            if(possible(bloomDay , m , k , mid)){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
};