class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for(int value: nums){
            if(seen.find(value) != seen.end()){
                return true;
            }
            seen.insert(value);
        }
        return false;
    }
};