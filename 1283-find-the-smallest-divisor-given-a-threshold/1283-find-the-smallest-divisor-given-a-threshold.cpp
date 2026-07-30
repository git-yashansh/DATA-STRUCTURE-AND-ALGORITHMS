// class Solution {
// public:
//     bool candivde(vector<int>&nums,int mid,int threshold){
//         int sum = 0;
//         int n = nums.size();
//         for(int i = 0;i<n;i++){
//             sum += ceil(nums[i] / mid);
            
            
//         }
//         return sum <= threshold;

//     }


//     int smallestDivisor(vector<int>& nums, int threshold) {
//         int n = nums.size();
//         int start = 1;
//         int end = *max_element(begin(nums),end(nums));
//         while(start <= end){
//             int mid = start - (end - start) / 2;
//             if(candivde(mid,threshold,nums)){
//                 end = mid - 1;
//             }else{
//                 start = mid+1;
//             }

//         }
//         return start;

//     }
// };


class Solution {
public:

    bool canDivide(vector<int>& nums, int mid, int threshold) {

        int sum = 0;

        for (int x : nums) {
            sum += ceil((double)x / mid);   //for calculate by flaoting division like 5.0

            if (sum > threshold)
                return false;
        }

        return true;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {

        int start = 1;
        int end = *max_element(nums.begin(), nums.end());

        while (start <= end) {

            int mid = start + (end - start) / 2;

            if (canDivide(nums, mid, threshold)) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }

        return start;
    }
};