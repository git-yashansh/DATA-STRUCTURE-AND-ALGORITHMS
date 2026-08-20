class Solution {
public:
    bool isValid(string s) {
        int n = s.length();
        int i = 0;
        stack<char> st;

        while (i < n) {

            
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
            }

            
            else if (s[i] == ')') {
                if (!st.empty() && st.top() == '(') {
                    st.pop();
                } else {
                    return false;
                }
            }

            
            else if (s[i] == '}') {
                if (!st.empty() && st.top() == '{') {
                    st.pop();
                } else {
                    return false;
                }
            }

            
            else if (s[i] == ']') {
                if (!st.empty() && st.top() == '[') {
                    st.pop();
                } else {
                    return false;
                }
            }

            i++;
        }

        return st.empty(); 
    }
};