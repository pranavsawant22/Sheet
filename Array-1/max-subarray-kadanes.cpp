// roblem link : https://leetcode.com/problems/maximum-subarray/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size(),mn = INT_MIN;
        int dp[n+1];
       
        dp[0] = nums[0];
        for(int i=1;i<n;i++){
            dp[i] = max(dp[i-1]+nums[i],nums[i]);
            
        }
        for(int i=0;i<n;i++){
            mn = max(mn,dp[i]);
        }
        return mn;
    }
};