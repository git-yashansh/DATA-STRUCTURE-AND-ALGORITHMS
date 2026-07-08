class Solution {
public:
    std::vector<std::vector<int>> threeSum(std::vector<int>& nums) {
        std::vector<std::vector<int>> result;
        int n = nums.size();
        
        // 1. Sort the array
        std::sort(nums.begin(), nums.end());
        
        // 2. Fix the first element
        for (int i = 0; i < n - 2; ++i) {
            // Early exit if the smallest remaining number is positive
            if (nums[i] > 0) break;
            
            // Skip duplicate values for the first element
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            
            // 3. Two-pointer search
            int left = i + 1;
            int right = n - 1;
            
            while (left < right) {
                int current_sum = nums[i] + nums[left] + nums[right];
                
                if (current_sum < 0) {
                    left++;
                } else if (current_sum > 0) {
                    right--;
                } else {
                    result.push_back({nums[i], nums[left], nums[right]});
                    left++;
                    right--;
                    
                    // Skip duplicate values for the remaining elements
                    while (left < right && nums[left] == nums[left - 1]) left++;
                    while (left < right && nums[right] == nums[right + 1]) right--;
                }
            }
        }
        return result;
    }
};