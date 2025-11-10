class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0; int r = 0;
        unordered_set<int> freq;
        int longest = 1;
        string current_string;
        if (s.length() == 0){
            return 0;
        }
        while(r < s.length()){
            if(freq.find(s[r]) == freq.end()){
                freq.insert(s[r]);
                current_string += s[r];
                longest = max(longest, static_cast<int>(current_string.length()));
                r++;
            }
            else{
                freq.erase(s[l]);
                current_string.erase(0,1); //hoijpiuioiu
                l++;
            }
        }
        return longest;
    }      
};