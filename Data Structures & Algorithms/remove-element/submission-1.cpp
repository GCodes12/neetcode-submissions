class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // int n = nums.size();

        // int r=0,l=0;
        // while(r<n){
        //     if(nums[r] != val){
        //         nums[l] = nums[r];
        //         l++;
        //    }
        //    r++;
        // }
        // return l;

        int n = nums.size();

        int l=0, r=0;
        while(r<n){
            if(nums[l] == val && nums[r] != val){
                swap(nums[l], nums[r]);
            }
            else if(nums[l] == val && nums[r] == val){
                r++;
            }
            else if(nums[l] != val && nums[r] != val){
                r++;
                l++;
            }
            else {
                l++;
            }
        }
        return l-0;
    }
};