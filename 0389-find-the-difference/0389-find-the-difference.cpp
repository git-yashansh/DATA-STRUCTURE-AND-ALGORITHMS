class Solution {
public:
    char findTheDifference(string s, string t) {
        string f = s + t;
        char c = 0;
        for(char x : f){
            c ^= x;
        }
        return c;
        
    }
};