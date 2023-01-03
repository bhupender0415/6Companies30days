/*
Question link -> https://leetcode.com/problems/rotate-function/
*/

class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int ans = 0;
        for(int i = 0; i < n; i++){
            sum += nums[i];
            ans += i*nums[i];
        }
        
        int index = n-1;
        int res = ans;
        for(int k = 1; k < n; k++){
            ans = ans - ((n-1)*nums[index]) + (sum-nums[index]);
            res = max(res, ans);
            index--;
        }
        return res;
    }
};