class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxhigh = INT_MIN;
        

        for(int i = 0;i<nums.size()-1;i++){
            for(int j = i+1;j<nums.size();j++){
                int max1 = (nums[i]-1)*(nums[j]-1);
                maxhigh = max(maxhigh,max1);






            }
        }
        return maxhigh;

        
        
    }
};