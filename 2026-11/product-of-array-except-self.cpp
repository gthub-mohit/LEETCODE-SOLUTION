/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : product-of-array-except-self                                ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : November 11, 2026                                           ║
 ║  URL      : https://leetcode.com/problems/product-of-array-except-self/ ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       int n=nums.size();
       vector<int> answer(n , 1);
       int left=1;
       int right=1;
       for(int k=0;k<n;k++){
            answer[k]=left;
            left*=nums[k];
       }
       for(int k=n-1;k>=0;k--){
            answer[k]*=right;
            right*=nums[k]; 
       }
       return answer; 
    }
};