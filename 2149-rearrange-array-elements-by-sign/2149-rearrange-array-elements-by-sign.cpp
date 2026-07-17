
// BRUTE FORCE
// class Solution {
// public:
//     vector<int> rearrangeArray(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> pos;
//         vector<int> neg;
//         vector<int> fi(n);

//         for(int i = 0;i<n;i++){
//             if(nums[i] > 0){
//                 pos.push_back(nums[i]);
//             }else{
//                 neg.push_back(nums[i]);
//             }
//         }
//         for(int i = 0; i < pos.size(); i++) {
//         fi[2 * i] = pos[i];
//         fi[2 * i + 1] = neg[i];
// }
//         return fi;

        
//     }
// };
// // OPTIMAL CODE

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n);
        int pos=0;
        int neg=1;
        for(int x:nums){
            if(x>0){
                ans[pos]=x;
                pos+=2;
            }else{
                ans[neg]=x;
                neg+=2;
            }
        }
        return ans;
        
    }
};






