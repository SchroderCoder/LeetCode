class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> comps;
        for (int i = 0; i< nums.size(); i++){
            if(comps.find(target - nums[i]) != comps.end()){
                return {comps[target - nums[i]], i};
            }
            comps[nums[i]] = i;
        }
        return {};
    }
};