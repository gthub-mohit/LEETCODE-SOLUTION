/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : search-a-2d-matrix-ii                                       ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : September 12, 2026                                          ║
 ║  URL      : https://leetcode.com/problems/search-a-2d-matrix-ii/submissions/2139245567/║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    bool binarysearch(vector<int>&arr , int n , int target){
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]==target)return true;
            else if(arr[mid]>target)high=mid-1;
            else low=mid+1;
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        for(int k=0;k<n;k++){
            if(target>=matrix[k][0]&& target<=matrix[k][m-1])
            if(binarysearch(matrix[k] , m ,target))return true;
        }
        return false;
    }
};