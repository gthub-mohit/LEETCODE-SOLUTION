/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : kth-missing-positive-number                                 ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 17, 2026                                             ║
 ║  URL      : https://leetcode.com/problems/kth-missing-positive-number/submissions/2110215359/║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int low=0;
        int n=arr.size();
        int high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            int missing=arr[mid]-mid-1;
            if(missing<k)
                low=mid+1;
            else
                high=mid-1;
        }
        return low+k;
    }
};