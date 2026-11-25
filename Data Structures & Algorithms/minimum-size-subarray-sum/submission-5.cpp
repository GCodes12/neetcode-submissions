class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        // int n = nums.size();
        // int l=0, r=0;
        // int sum=0, ans = INT_MAX;

        // while(r<n){
        //     sum += nums[r];

        //     while(sum >= target){
        //         ans = min(r-l+1, ans);
        //         sum-=nums[l];
        //         l++;
        //     }
        //     r++;
        // }
        // return (ans == INT_MAX) ? 0 : ans;



        int n = nums.size();
        int l = 0, r=0;
        int length = INT_MAX, sum = 0;

        for(int r=0; r<n; r++){
            sum += nums[r];

            while(sum >= target){
                length = min(length, r-l+1);
                sum -= nums[l];
                l++;
            }
        }
        return (length == INT_MAX)? 0 : length;
    }
};