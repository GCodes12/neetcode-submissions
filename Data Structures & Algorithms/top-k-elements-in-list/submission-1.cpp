class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // unordered_map<int, int>mpp;
        // int n = nums.size();

        // for(int i=0; i<n; i++){
        //     mpp[nums[i]]++;
        // }
        
        // vector<vector<int>>bucket(n+1);

        // for(auto & [key, value] : mpp){
        //     bucket[value].push_back(key);
        // }


        // vector<int>ans;
        // for(int i=n; i>=0 && ans.size() < k; i--){
        //     for(int num: bucket[i]){
        //         ans.push_back(num);
        //         if(ans.size() == k) break;
        //     }
        // }
        // return ans;

        // Step 1: Count frequency
        unordered_map<int, int>mpp;
        int n = nums.size();
        for(int i=0; i<n; i++){
            mpp[nums[i]]++;
        }

        // Step 2: Transfer map entries into a vector
        vector<pair<int,int>>v(mpp.begin(), mpp.end());


        // Step 3: Sort based on frequency (descending)
        sort(v.begin(), v.end(), [] (auto &a, auto &b){
            return a.second > b.second;
        });

        // Step 4: Store the first k elements
        vector<int>ans;
        for(int i=0; i<k; i++){
            ans.push_back(v[i].first);
        }

        return ans;
    }
};
