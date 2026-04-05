class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end()); 
        vector<vector<int>> res;
        int n = nums.size();

        for (int i = 0; i < n - 2; ++i) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            
            int j = i + 1, z = n - 1; 
            
            while (j < z) {
                int sum = nums[i] + nums[j] + nums[z];
                
                if (sum == 0) {
                    res.push_back({nums[i], nums[j], nums[z]});
                    
                    while (j < z && nums[j] == nums[j + 1]) j++;
                    while (j < z && nums[z] == nums[z - 1]) z--;
                    j++;
                    z--;
                } else if (sum < 0) {
                    j++; 
                } else {
                    z--; 
                }
            }
        }
        return res;
    }
};
