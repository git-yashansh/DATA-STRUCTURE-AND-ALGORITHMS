class Solution {
public:



    bool caneat(vector<int>&piles,int mid,int h){
        int realhour = 0;
        for(int &x : piles){
            realhour += x/mid;
            if(x%mid != 0){
                realhour++;
            }   
        }
        return realhour <=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int l = 1;
        int r = *max_element(begin(piles),end(piles));
        while(l < r){
            int mid = l + (r-l)/2;
            if(caneat(piles,mid,h)){
                r = mid;
            }else{
                l = mid + 1;

            }
        }
        return l;

        
    }
};