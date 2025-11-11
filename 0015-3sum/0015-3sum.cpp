class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int i = 0;
        int l = 1;
        int r = nums.size() - 1;
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;

        while (i < nums.size() && nums[i] <= 0) {
            if (i > 0 && nums[i] == nums[i - 1]) {
                i++;
                l = i + 1;
                r = nums.size() - 1;
                continue;
            }

            while (l < r) {
                if (nums[l] + nums[r] > -nums[i]) {
                    r--;
                } 
                else if (nums[l] + nums[r] < -nums[i]) {
                    l++;
                } 
                else { 
                    ans.push_back({nums[i], nums[l], nums[r]});
                    while (l < r && nums[l] == nums[l + 1]) l++;
                    while (l < r && nums[r] == nums[r - 1]) r--;
                    l++;
                    r--;
                }
            }

            i++;
            l = i + 1;
            r = nums.size() - 1;
        }

        return ans;
    }
};
