class Solution {
public:

    int helper(vector<int>& weights, int cap){
        int days = 1;
        int load = 0;
        for(int it: weights){
            if(load + it <= cap){
                load += it;
            }
            else{
                days++;
                load = it;
            }
        }
        return days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(),0);

        int result = high;
        while(low <= high){
            int mid = low + (high - low)/2;

            int time = helper(weights, mid);

            if(time <= days){
                result = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return result;
    }
};