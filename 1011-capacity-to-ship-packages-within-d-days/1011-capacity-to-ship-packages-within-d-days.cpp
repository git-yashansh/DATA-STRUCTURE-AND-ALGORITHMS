class Solution {
public:

    bool canship(vector<int>&weights,int mid,int days){
        int dayscount = 1;
        int loaded = 0;
        for(int x : weights){
            if(loaded + x <= mid){
                loaded += x;
            }else{
                dayscount++;
                loaded = x;
            }
        }
        return dayscount<=days;
    }




    int shipWithinDays(vector<int>& weights, int days) {
       
        int low = *max_element(begin(weights),end(weights));
        int high = 0;
        for(int x : weights){
            high += x;
        }
        while(low <= high){
            int mid = low + (high - low) / 2;
            if(canship(weights,mid,days)){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return low;
        
        
    }
};