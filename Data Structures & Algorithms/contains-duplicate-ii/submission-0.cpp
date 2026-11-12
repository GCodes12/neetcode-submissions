class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        int l=0,r=0;

        unordered_set<int>st;
        while(r<n){
            if(st.count(nums[r])){
                return true;
            }
            else{
                st.insert(nums[r]);
            }
            if(st.size() > k){
                st.erase(nums[l]);
                l++;
            }
            r++;
        }
        return false;
    }
};