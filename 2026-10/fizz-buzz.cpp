/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : fizz-buzz                                                   ║
 ║  Platform : LeetCode                                                    ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : October 26, 2026                                            ║
 ║  URL      : https://leetcode.com/problems/fizz-buzz/submissions/2182313363/║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

class Solution {
public:
    vector<string> fizzBuzz(int n) {
      vector<string> arr;
      for(int k=1;k<=n;k++){
        if(k%3==0 && k%5==0)arr.push_back("FizzBuzz");
        else if(k%3==0)arr.push_back("Fizz");
        else if(k%5==0)arr.push_back("Buzz");
        else arr.push_back(to_string(k));
      }
      return arr;  
    }
};