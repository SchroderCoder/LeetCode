class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0; int r = height.size()-1;
        int max_area = 0;
        int curr_area;

        while ( l < r ) {
            curr_area = min(height[l] , height[r]) * ( r - l );
            max_area = max(max_area,curr_area );
            if ( height[l] <= height[r] ){
                l++;
            }
            else{
                r--;
            }
        }
        return max_area;
    }
};