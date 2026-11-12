class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int ans = INT_MIN;
        int sum = nums[0];
        ans = max(ans, sum);

        for(int i=1; i<n; i++){
            if(sum < 0) sum = 0;
            sum += nums[i];
            ans = max(sum, ans);
        }
        return ans;
    }
};
