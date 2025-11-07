class Solution {
public:
    int romanToInt(string s) {
        unordered_map<string,int> nums = {{"I",1},{"V",5},{"X",10},{"L",50},{"C",100},{"D",500},{"M",1000},{"IV",4},{"IX",9},{"XL",40},{"XC",90},{"CD",400},{"CM",900}};
        int sum = 0;
        for (int i = 0; i<s.length();i+=2){
            string key = s.substr(i,2);
            std::cout<<key<<std::endl;
            if(nums.find(key) != nums.end()){
                sum = sum + nums[key];
            }
            else{
                sum = sum + nums[key.substr(0, 1)];
                i--;
            }
        }
        return sum;
    }
};