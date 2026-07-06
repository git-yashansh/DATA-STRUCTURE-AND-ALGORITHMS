class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        int max = *max_element(candies.begin(), candies.end());

        
        vector<bool> a;
        int extra = extraCandies;
        for(int i = 0;i<n;i++){
            if(candies[i] + extra >= max){
                a.push_back(true);
            }else{
                a.push_back(false);
            }


        }
        return a;


        

    }
};