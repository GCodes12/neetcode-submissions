class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        // int n = nums.size();
        // int l=0,r=0;

        // unordered_set<int>st;
        // while(r<n){
        //     if(r-l+1 > k+1){
        //         st.erase(nums[l]);
        //         l++;
        //     }
        //     if(st.count(nums[r])){
        //         return true;
        //     }
        //     else{
        //         st.insert(nums[r]);
        //     }
            
        //     r++;
        // }
        // return false;


        unordered_map<int,int>mpp;
        int n = nums.size();

        for(int i=0; i<n; i++){
            if(mpp.find(nums[i]) != mpp.end()){
                if(i-mpp[nums[i]] <= k){
                    return true;
                }    
            }
            mpp[nums[i]] = i;
        }
        return false;
    }
};