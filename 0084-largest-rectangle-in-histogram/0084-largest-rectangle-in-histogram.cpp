class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> stack;
        int max_rectangle = 0;

        for ( int i = 0; i < heights.size(); i++){
            while (!stack.empty() && heights[i] < heights[stack.top()]){
                int height = heights[stack.top()];

                stack.pop();

                int width;

                if (stack.empty()) {
                    width = i;
                } else {
                    width = i - stack.top() - 1;
                }
                max_rectangle = max(max_rectangle, height * width );
            }
            stack.push(i);
        }

        while (!stack.empty()){
            int height = heights[stack.top()];
            stack.pop();

            int width;
            width = stack.empty() ? heights.size() : heights.size() - stack.top() - 1;
            max_rectangle = max(max_rectangle, height * width);
        }

        return max_rectangle;
    }
};