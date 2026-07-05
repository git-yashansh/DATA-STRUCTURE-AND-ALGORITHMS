class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> num3(nums1.size() + nums2.size());

        merge(nums1.begin(), nums1.end(),nums2.begin(), nums2.end(),num3.begin());

        sort(num3.begin(),num3.end());
        int n = num3.size();
        if(n % 2 != 0){
           
            return num3[n /2];

        }
        
        else if(n % 2 == 0){
            int c = num3[n/2];
            int v = (n / 2) - 1;
            int b = num3[v];
            return (c + b) / 2.0; 
        }
        return -1;

        
    }
};