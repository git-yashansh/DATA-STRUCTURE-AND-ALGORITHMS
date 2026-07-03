class Solution {
public:
    int isPalindrome(string s) {
        stringstream ss(s);
        string word = "";
        

        int n = s.size();
        for(int  i =0;i<n;i++){
            if(isalnum(s[i])){
                word += tolower(s[i]);
                

            }
        }
        int h = word.size();


        if(h == 0){
            return true;
        }
        int left = 0;
        int right = h - 1;
        while(left <= right){
            if(word[left] != word[right]){
                return false;


            }
            left++;
            right--;

        }
        return true;


        
    }
};