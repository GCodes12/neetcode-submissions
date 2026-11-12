class Solution {
public:

    int helper(vector<int>& piles, int check){
        int n = piles.size();
        int count = 0;
        for(int i=0; i<n; i++){
            count += (piles[i] + check - 1)/check;
        }
        return count;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int low = 1, high = *max_element(piles.begin(), piles.end());
        int result = high;
        while(low <= high){
            int mid = low + (high-low)/2;
            
            int hours = helper(piles, mid);
            if(hours <= h){
                result = mid;
                high = mid-1;
            }else{
                low = mid + 1;
            }
        }
        return result;
    }
};
