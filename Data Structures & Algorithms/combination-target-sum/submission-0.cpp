class Solution {
public:
    void helper(int idx, int target, vector<int>& nums, vector<vector<int>>& res, vector<int>& candidates) {
        if (target == 0) {
            res.push_back(nums);
            return;
        }
        
        for (int i = idx; i < candidates.size(); ++i) {
            if (candidates[i] <= target) { 
                nums.push_back(candidates[i]); 
                helper(i, target - candidates[i], nums, res, candidates);
                nums.pop_back();
            }
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> nums;
        helper(0, target, nums, res, candidates);
        return res;
    }
};
