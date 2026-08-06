#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> result;
        if (s.empty() || words.empty()) return result;

        int wordLen = words[0].length();
        int numWords = words.size();
        int totalLen = wordLen * numWords;
        int n = s.length();

        if (n < totalLen) return result;

        unordered_map<string, int> wordCount;
        for (const string& word : words) {
            wordCount[word]++;
        }

        for (int i = 0; i < wordLen; ++i) {
            unordered_map<string, int> seen;
            int left = i;
            int count = 0;

            for (int right = i; right <= n - wordLen; right += wordLen) {
                string sub = s.substr(right, wordLen);
                if (wordCount.count(sub)) {
                    seen[sub]++;
                    count++;

                    while (seen[sub] > wordCount[sub]) {
                        string leftSub = s.substr(left, wordLen);
                        seen[leftSub]--;
                        count--;
                        left += wordLen;
                    }

                    if (count == numWords) {
                        result.push_back(left);
                    }
                } else {
                    seen.clear();
                    count = 0;
                    left = right + wordLen;
                }
            }
        }

        return result;
    }
};