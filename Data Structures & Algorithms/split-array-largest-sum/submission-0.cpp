class Solution {
public:

    bool canSplit(vector<int>& nums, int k, long long limit){
        int count = 1;
        long long currSum = 0;

        for(int num: nums){
            if(currSum + num <= limit){
                currSum += num;
            }
            else{
                count++;
                currSum = num;
            }
            if(count > k){
                return false;
            }
        }
        return true;
    }

    int splitArray(vector<int>& nums, int k) {
        long long low = *max_element(nums.begin(), nums.end());
        long long high = accumulate(nums.begin(), nums.end(), 0);
        long long ans = high;

        while(low <= high){
            long long mid = low + (high-low)/2;

            if(canSplit(nums,k,mid)){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
};