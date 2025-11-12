class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int r = nums.size()-1;
        for ( int l = nums.size()-2; l >= 0 ; l--){
            if (nums[l] < nums[l+1] ){
                while (nums[r] <= nums[l]) r--;
                nums[l] = nums[l]+ nums[r];
                nums[r] = nums[l] - nums[r];
                nums[l] = nums[l] - nums[r];
                reverse(nums.begin() + l + 1, nums.end());
                return;
            }

        }

        reverse(nums.begin(), nums.end());
    }
};