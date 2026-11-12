class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>>mpp;
        int n = strs.size();
       
        for(string s: strs){
            string key = s;
            sort(key.begin(), key.end());
            mpp[key].push_back(s);
        }
        vector<vector<string>>result;
        for(auto& it : mpp){
            result.push_back(it.second);
        }
        return result;

    }
};
