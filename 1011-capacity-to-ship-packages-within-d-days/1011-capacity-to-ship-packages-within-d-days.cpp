class Solution {
public:
    bool canbeship(vector<int>&weights,int mid,int days){
        int day = 1;
        int loaded = 0;
        for(int c : weights){
            if(loaded + c <= mid){
                loaded += c;
            }else{
                day++;
                loaded=c;
            }

        }
        return day <= days;
    }




    
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int left = *max_element(weights.begin(),weights.end());
        int right = 0;
        for(int i : weights){
            right += i;
        }
        while(left < right){
            int mid = left + (right - left) / 2;
            if(canbeship(weights,mid,days)){
                right = mid;
            }else{
                left = mid + 1;
            }

        }
        return left;
        
    }
};