class Solution {
public:
    vector<string> result;
    
    void backtrack ( string current, int open, int closed, int n){
        if ( current.size() == 2 * n){
            result.push_back(current);
        }
        if (open < n) {
            backtrack(current + '(', open + 1, closed, n);
        }
        if (closed < open){
            backtrack(current + ')', open , closed + 1, n);
        }
    }

    vector<string> generateParenthesis(int n) {
        backtrack("",0,0,n);
        return result;
    }
};