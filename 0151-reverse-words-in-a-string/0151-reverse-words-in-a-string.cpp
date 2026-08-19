class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        vector <string> ans;
        while(ss >> word){
            ans.push_back(word);

        }
        reverse(ans.begin(),ans.end());
        string ans2;
        for(int i = 0;i<ans.size();i++){
            if(i > 0){
                ans2 += " ";
            }
            ans2 += ans[i];
        }
        return ans2;

    }
};