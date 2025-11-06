class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i = 0, j = 0;
        vector<int> sorted;

        while( i < nums1.size() && j < nums2.size()){

            if(nums1[i] <= nums2[j]){
                sorted.push_back(nums1[i]);
                i++;
            }
            else{
                sorted.push_back(nums2[j]);
                j++;
            }
        }

        if (i<nums1.size()){
            sorted.insert(sorted.end(),nums1.begin()+i,nums1.end());
        }
        if (j<nums2.size()){
            sorted.insert(sorted.end(),nums2.begin()+j,nums2.end());
        }

        if (sorted.size() % 2 == 0) {
            return (sorted[(sorted.size()/2)] + sorted[(sorted.size()/2)-1])/2.0;
        }
        else{
            return sorted[sorted.size()/2];
        }
    }
};