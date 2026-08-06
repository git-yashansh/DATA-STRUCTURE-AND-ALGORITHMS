#include <string>
#include <vector>
#include <algorithm>

class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows <= 1 || numRows >= s.length()) {
            return s;
        }

        std::vector<std::string> rows(std::min(numRows, static_cast<int>(s.length())));
        int currRow = 0;
        bool goingDown = false;

        for (char c : s) {
            rows[currRow] += c;
            if (currRow == 0 || currRow == numRows - 1) {
                goingDown = !goingDown;
            }
            currRow += goingDown ? 1 : -1;
        }

        std::string result;
        for (const std::string& row : rows) {
            result += row;
        }

        return result;
    }
};