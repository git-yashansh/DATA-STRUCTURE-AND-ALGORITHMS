class Solution {
public:
    vector<int>merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int b = m + n;
        int c = nums1.size();

        vector <int> a(b);

        for(int i = 0;i<m;i++){
            a[i] = nums1[i];
        }
        for(int j = 0;j<n;j++){
            a[m + j] = nums2[j];
        }
        

        sort(a.begin(),a.end());

        for(int i=0;i<c;i++){
            nums1[i] = a[i];
        }

        return nums1;
        

      

        

        
    }
    
};