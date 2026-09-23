class Solution {
public:
    int minOperations(vector<int>& nums, int x) {

        int n = nums.size();

        // Find total sum
        int totalSum = 0;

        for(int i = 0; i < n; i++) {
            totalSum += nums[i];
        }

        // We need longest subarray with this sum
        int target = totalSum - x;

        // If target is negative
        if(target < 0) {
            return -1;
        }

        int left = 0;
        int sum = 0;
        int maxLen = -1;

        // Sliding Window
        for(int right = 0; right < n; right++) {

            sum += nums[right];

            while(sum > target) {
                sum -= nums[left];
                left++;
            }

            if(sum == target) {
                maxLen = max(maxLen, right - left + 1);
            }
        }

        // No subarray found
        if(maxLen == -1) {
            return -1;
        }

        // Elements outside the subarray are removed
        return n - maxLen;
    }
};