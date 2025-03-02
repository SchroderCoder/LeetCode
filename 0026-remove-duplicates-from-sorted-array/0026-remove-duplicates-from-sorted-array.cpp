class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int prev = 0;
        int k = 1;
        if (nums.empty()) return 0;
        for (int i = 1; i<nums.size(); i++){
            if (nums[i] != nums[prev]){
                prev++;
                k++;
                nums[prev] = nums[i];
            }
        }
        return k;
    }
};