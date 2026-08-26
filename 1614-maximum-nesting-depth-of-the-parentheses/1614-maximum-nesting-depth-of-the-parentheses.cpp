class Solution {
public:
    int maxDepth(string s) {
        int depth = 0;
        int maxdepth = 0;
        for(char c : s){
            if(c == '('){
                depth++;
                maxdepth = max(maxdepth,depth);
            }else if(c == ')'){
                depth--;
            }
        }
        return maxdepth;
        
    }
};


// class Solution {
// public:
//     int maxDepth(string s) {
//         int count = 0;
//         int count1 = 0;
//         for( char a : s){
//             if(a == '('){
//                 count++;
                

//             }
//         }
//         int last = s.rfind('(');
//         for(int i = 0 ;i<last;i++){
//             if(s[i] == ')'){
//                 count1++;
//             }
//         }
//         return count - count1;
//     }
// };