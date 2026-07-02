class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        vector<string> words;
        stringstream ss(s);
        string word;

    while (ss >> word) {  
        words.push_back(word);
    }
    int h = words.size();
    return words[h-1].size();
    

        
    }
};