class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        unordered_set<int>st;
        int l=0, r=0;
        int ans = 0;
        while(r<n){
            while(st.count(s[r])){
                st.erase(s[l]);
                l++;
            }
            st.insert(s[r]);
            ans = max(ans,(int)st.size());
            r++;
        }
        return ans;
    }
};
