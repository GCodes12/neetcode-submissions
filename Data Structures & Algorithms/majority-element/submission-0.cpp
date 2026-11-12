class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 1;
        int freq = 0;
        int candi = nums[0];

        int n = nums.size();
        for(int i=1; i<n; i++){
            if(candi == nums[i]){
                count++;
            }
            else{
                count--;
            }
            if(count == 0){
                candi = nums[i];
                count = 1;
            }
        }
        for(int i=0; i<n; i++){
            if(nums[i] == candi){
                freq++;
            }
        }
        if(freq >= n/2) return candi;

        return -1;
    }
};