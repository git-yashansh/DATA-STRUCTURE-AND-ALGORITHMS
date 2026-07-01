class Solution {
public:
    string capitalizeTitle(string title) {

        title += ' ';
        int n = title.size();

        string ans = "";
        string word = "";

        for (int i = 0; i < n; i++) {


            if (title[i] != ' ') {

                word += title[i];

            } else {

                for (int i = 0; i < word.size(); i++) {

                    word[i] = tolower(word[i]);
                }

                if (word.size() <= 2)
                    ans += word + ' ';
                else {

                    word[0] =  toupper(word[0]);
                    ans += word + ' ';
                }
                    word = "";
            }
        }

        ans.pop_back();

        
        


        

        return ans;
    }
};