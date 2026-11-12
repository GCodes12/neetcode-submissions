class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        vector<int>freq(26,0);
        int l = 0, r = 0;
        int maxfreq = 0, ans = 0;

        while(r<n){
            freq[s[r]-'A']++;
            maxfreq = max(maxfreq,freq[s[r]-'A']);

            while((r-l+1) - maxfreq > k){
                freq[s[l]-'A']--;
                l++;
            }

            ans = max(r-l+1,ans);
            r++;
        }
        return ans;
    }
};
