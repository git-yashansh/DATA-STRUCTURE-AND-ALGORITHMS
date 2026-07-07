class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        int n = nums.size();

        vector<int> prefix(n);

        prefix[0] = nums[0];

        for(int i = 1; i < n; i++)
        {
            prefix[i] = prefix[i-1] + nums[i];
        }

        int total = prefix[n-1];

        for(int i = 0; i < n; i++)
        {
            int leftsum = 0;

            if(i > 0)
            {
                leftsum = prefix[i-1];
            }

            int rightsum = total - prefix[i];

            if(leftsum == rightsum)
            {
                return i;
            }
        }

        return -1;
    }
};