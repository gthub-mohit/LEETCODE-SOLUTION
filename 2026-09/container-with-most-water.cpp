/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : container-with-most-water                                   ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : September 11, 2026                                          ║
 ║  URL      : https://leetcode.com/problems/container-with-most-water/submissions/2138301743/║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int left=0;
        int right=n-1;
        int maxi=0;
        while(left<right){
            int breadth=right-left;
            int length=min(height[left] , height[right]);
            int area=length*breadth;
            maxi=max(maxi , area);
            if(height[left]<height[right]) left++;
            else right--;
        }
        return maxi;
    }
};