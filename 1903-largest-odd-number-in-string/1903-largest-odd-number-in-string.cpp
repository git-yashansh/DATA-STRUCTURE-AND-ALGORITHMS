class Solution {
public:
    string largestOddNumber(string num) {
        string ans ="";
        int n = num.size();
        for(int i = n-1 ;i>=0;i--){
            if((num[i] - '0' )% 2 != 0){
                for(int j = 0;j<=i;j++){
                    ans.push_back(num[j]);

                }
                break;
            }

        }
        return ans;
        
        return ans;
        
    }
};