class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>mp;
        for(auto c : nums){
            mp[c]++;
        }
        for(auto p : mp){
            if(p.second > nums.size()/3){
                ans.push_back(p.first);
            }
        }
        return ans;
        
    }
};