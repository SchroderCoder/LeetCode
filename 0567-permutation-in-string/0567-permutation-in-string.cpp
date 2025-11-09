class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int s1_map[26] = {0};
        int s2_map[26] = {0};
        int window = s1.length();

        if(s2.length() < s1.length()){
            return false;
        }

        for(int i = 0; i< s1.length(); i++){
            s1_map[s1[i] - 'a']++;
            s2_map[s2[i] - 'a']++;
        }

        for (int i = 0; i<s2.length()- s1.length(); i++){
            if(matches(s1_map, s2_map)){
                return true;
            }
            s2_map[s2[i] - 'a']--;
            s2_map[s2[i + s1.length()] - 'a']++;
        }
        return matches(s1_map, s2_map);
    }

private:
    bool matches(int s1_map[], int s2_map[]) {
        for (int i = 0; i < 26; i++) {
            if (s1_map[i] != s2_map[i])
                return false;
        }
        return true;
    }
};