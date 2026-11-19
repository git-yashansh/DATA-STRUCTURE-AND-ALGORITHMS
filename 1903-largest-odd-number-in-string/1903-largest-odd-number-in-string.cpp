class Solution {
public:
    string largestOddNumber(string s) {
        int n = s.size();
        string ans = "";
        bool started = false;

        for(int i = n-1; i >= 0; i--) {
            if((s[i] - '0') % 2 != 0) {

                for(int j = 0; j <= i; j++) {

                    if(s[j] != '0') {
                        started = true;
                    }

                    if(started) {
                        ans.push_back(s[j]);
                    }
                }

                break;
            }
        }

        return ans;
    
        
    }
};