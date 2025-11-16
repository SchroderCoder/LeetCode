class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> stack;
        std::set<int> set;
        for ( int i = 0; i < s.size(); i++){
            if (isalnum(s[i])){
                continue;
            }
            else if (s[i] == '('){
                stack.push(i);
            }
            else if (s[i] == ')'){
                if (stack.empty()){
                    set.insert(i);
                }
                else{
                    stack.pop();
                }
            }
        }

        while(!stack.empty()){
            set.insert(stack.top());
            stack.pop();
        }

        string ans;
        for ( int i = 0; i < s.size(); i++){
            if ( set.count(i)){
                continue;
            } else{
                ans.push_back(s[i]);
            }
        }

        return ans;
    }   
};