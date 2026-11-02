
class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {

        sort(potions.begin(), potions.end());

        vector<int> ans;

        for(int i = 0; i < spells.size(); i++) {

            int low = 0;
            int high = potions.size() - 1;
            int index = potions.size();

            while(low <= high) {

                int mid = low + (high - low) / 2;

                long long product = 1LL * spells[i] * potions[mid];

                if(product >= success) {
                    index = mid;
                    high = mid - 1;
                }
                else {
                    low = mid + 1;
                }
            }

            ans.push_back(potions.size() - index);
        }

        return ans;
    }
};
