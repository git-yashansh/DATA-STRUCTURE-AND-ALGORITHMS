class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>mp;
        for(auto c : nums){
            mp[c]++;
        }
        int v = n / 3;
        vector<int>ans;
       for(auto p : mp){
        if(p.second > v){
            ans.push_back(p.first);
        }
       }
        return ans;
    }
};