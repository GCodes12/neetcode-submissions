class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int c1 = 0,c2 =0, cand1 = INT_MIN, cand2 = INT_MIN, n = nums.size();
        
        for(int i=0; i<n; i++){
            if(cand1 == nums[i]) c1++;
            else if(cand2 == nums[i]) c2++;
            else if(c1 == 0){
                cand1 = nums[i];
                c1++;
            }
            else if(c2 == 0){
                cand2 = nums[i];
                c2++;
            }
            else{
                c1--;
                c2--;
            }
        }
        int freq1 = 0, freq2 = 0;
        for(int i=0; i<n; i++){
            if(nums[i] == cand1){
                freq1++;
            }
            if(nums[i] == cand2){
                freq2++;
            }
        }
        vector<int>ans;
        if(freq1 > n/3) ans.push_back(cand1);
        if(freq2 > n/3) ans.push_back(cand2);

        return ans;
    }
};