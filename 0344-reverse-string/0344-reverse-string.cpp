class Solution {
public:
    void reverseString(vector<char>& s) {
        char temp;
        int i = 0;
        if(s.size() % 2 == 0){
            while (i - ((s.size()-i)-1)> 1){
                temp = s[i];
                s[i] = s[(s.size()-i)-1];
                s[(s.size()-i)-1] = temp;
                i++;
            }
        }  
        else {
            while (i != ((s.size()-i)-1)){
                temp = s[i];
                s[i] = s[(s.size()-i)-1];
                s[(s.size()-i)-1] = temp;
                i++;
            }
        }
    }
};