class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end()); 
        

        if(n == 1) return nums[0];
        if(n == 2) return nums[1];
        
        int count = 1;
        int max = nums[n-1]; 
        
        
        for(int i = n-2; i >= 0; i--) {
            if(nums[i] != max) { 
                max = nums[i];
                count++;
            }
            if(count == 3) return max; 
        }
       
        return nums[n-1];
    }
};
