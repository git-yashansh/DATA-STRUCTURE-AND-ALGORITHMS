class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(char c:s){
            mp[c]++;
        }
        // jo freq map ho chuka hai usko vector banaye h taki sort kr sake
        vector<pair<char,int>>v(mp.begin(),mp.end());
        // lamda fubction use kiye h u=kyuki mere hisab se sort krna hai isliye
        sort(v.begin(),v.end(),[](auto &a, auto &b){
            return a.second > b.second;
        });
        
        string ans = "";
        for(auto &p:v){
            ans.append(p.second,p.first);
        }
        return ans;
    }
};