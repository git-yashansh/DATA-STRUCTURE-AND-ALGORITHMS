class Solution {
public:
    vector<int> twoSum(vector<int>& numb, int target) {
    int left = 0, right = numb.size() - 1;
    while (left < right) {
        int sum = numb[left] + numb[right];
        if (sum == target) {
            return {left+1, right+1};
        } else if (sum < target) {
            left++;   
        } else {
            right--;
        }
    }
    return {};
}

};