class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // int n = nums.size();

        // int j=1;
        // for(int i=1; i<n; i++){
        //     if(nums[i] != nums[i-1]){
        //         nums[j] = nums[i];
        //         j++;
        //     }
        // }
        // nums.erase(nums.begin()+j,nums.end());
        // return j;


        int n = nums.size();

        int i=0;
        for(int j=1; j<n; j++){
            if(nums[i] != nums[j]){
                i++;
                nums[i] = nums[j];
            }
        }
        return i+1;
    }
};