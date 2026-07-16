class Solution {
public:
    int maximumValue(vector<string>& strs) {

        int n = strs.size();
        vector<int> a;

        for(int i = 0; i < n; i++)
        {
            bool allDigits = true;

            for(char ch : strs[i])
            {
                if(!isdigit(ch))
                {
                    allDigits = false;
                    break;
                }
            }

            if(allDigits)
            {
                a.push_back(stoi(strs[i]));
            }
            else
            {
                a.push_back(strs[i].size());
            }
        }

        return *max_element(a.begin(), a.end());
    }
};