class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        int n = nums.size()-1;

        //1.cycle detection
        int slow = nums[0], fast = nums[0];
        while(true){
            slow = nums[slow];
            fast = nums[nums[fast]];

            if(slow == fast) break;
        }

        //2.duplicate number
        slow = nums[0];
        while(slow != fast){
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;

    }
};
