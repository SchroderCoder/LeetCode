class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char> map;
        stack<char> stack;

        map[')'] = '(';
        map[']'] = '[';
        map['}'] = '{';

        for ( int i = 0; i < s.size(); i++){

            if (map.find(s[i]) == map.end()){
                stack.push(s[i]);
            }
            else{
                if (stack.empty()){
                    return false;
                }
                if (stack.top() != map[s[i]]){
                    return false;
                }
                stack.pop();
            }
        }
        return stack.empty();

    }
};