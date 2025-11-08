class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char,int> dict;
        int i = 0;
        for (char letter : order){
            dict[letter] = i;
            i++;
        }

        for (int j =0 ; j<words.size()-1; j++){
            for( int k = 0; k < words[j].length(); k++){
                if (k>= words[j+1].length()){ 
                    return false; 
                }
                if(dict[words[j][k]] < dict[words[j+1][k]]){
                    break;
                }
                if(dict[words[j][k]] > dict[words[j+1][k]]){
                    return false;
                }

            }
        }
        return true;
    }
};