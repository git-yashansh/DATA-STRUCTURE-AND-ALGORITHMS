class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int c = nums2.size();
        vector<int> a;
        for(int i = 0;i<n;i++){
            for(int j = 0;j<c;j++){
                if(nums1[i] == nums2[j]){
                    a.push_back(nums1[i]);
                    

                }
            }

        }
        unordered_set<int> s(a.begin(), a.end()); 
        return vector<int>(s.begin(), s.end());  
    }
};