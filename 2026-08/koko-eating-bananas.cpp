/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : koko-eating-bananas                                         ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 15, 2026                                             ║
 ║  URL      : https://leetcode.com/problems/koko-eating-bananas/          ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    long long minihours(vector<int> & piles , int x){
        long long tot_hrs=0;
        int n=piles.size();
        for(long long k=0;k<n;k++){
            tot_hrs+=((long long)piles[k]+x-1)/x;
        }
        return tot_hrs;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int high=*max_element(piles.begin() , piles.end());
        int low=1;
        int ans=0;
        while(low<=high){
            int mid=(low+high)/2;
            long long tot_hrs=minihours(piles , mid);
            if(tot_hrs<=h){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
};