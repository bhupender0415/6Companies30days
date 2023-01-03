/*

Question link -> https://leetcode.com/problems/combination-sum-iii/

*/

class Solution {
public:
    vector<vector<int>> res;
    void helper(vector<vector<int>> &res, vector<int> &ds, int count, int sum, int start){
        // base condition 
        if(sum==0 && count==0){
            res.push_back(ds);
            return;
        }

        if(sum==0 || count==0)
            return;

        if(start>9)
            return;
    
        if(sum>=start && count>0){
            ds.push_back(start);                               
            helper(res, ds, count-1, sum-start, start+1);      // recursive call
            ds.pop_back();                                     // backtracking
        }
        helper(res, ds, count, sum, start+1);
    }

    vector<vector<int>> combinationSum3(int k, int n) {
    
        vector<int> ds;
        helper(res, ds, k, n, 1);
        return res;
    }
};