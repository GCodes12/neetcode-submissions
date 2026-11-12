class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        int l=0,r=0;

        unordered_set<int>st;
        while(r<n){
            if(r-l+1 > k+1){
                st.erase(nums[l]);
                l++;
            }
            if(st.count(nums[r])){
                return true;
            }
            else{
                st.insert(nums[r]);
            }
            
            r++;
        }
        return false;
    }
};