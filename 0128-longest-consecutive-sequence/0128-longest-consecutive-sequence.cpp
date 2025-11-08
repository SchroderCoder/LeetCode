class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int longest = 1;
        unordered_set<int> hash;
        if(nums.size()==0){
            return 0;
        }
        for (int num : nums){
            hash.insert(num);
        }
        for(int value : hash){
            int current_consecutive = 1;
            if(hash.find(value - 1) != hash.end()){
                continue;
            }
            else{
                int current_number = value;
                while(hash.find(current_number+1)!= hash.end()){
                    current_number++;
                    current_consecutive++;
                }
            }
            longest = max(longest,current_consecutive);
        }
        return longest;
    }
};