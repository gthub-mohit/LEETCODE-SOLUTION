/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : move-zeroes                                                 ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : November 13, 2026                                           ║
 ║  URL      : https://leetcode.com/problems/move-zeroes/submissions/2195056608/║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int n=arr.size();
   int count=0;

for(int k=0;k<n;k++){
    if(arr[k]==0) count++;
}

while(count>0){
    for(int k=0;k<n-1;k++){
        if(arr[k]==0){
            swap(arr[k],arr[k+1]);
        }
    }
    count--;
}
    }
    
};