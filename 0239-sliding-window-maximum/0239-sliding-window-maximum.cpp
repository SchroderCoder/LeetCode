class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
      vector<int> ans;
      deque<int> dequeue; 
      for (int i = 0 ; i < nums.size(); i++){

        while(!dequeue.empty() && ( i - dequeue.front() >= k )){
            dequeue.pop_front();
        }

        while(!dequeue.empty() && nums[i] >= nums[dequeue.back()]) {
            dequeue.pop_back();
        }

        dequeue.push_back(i);

        if( i >= k - 1 ){
            ans.push_back(nums[dequeue.front()]);
        }
      }
      return ans;
    }
};