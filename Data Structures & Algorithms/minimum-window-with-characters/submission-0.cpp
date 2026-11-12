class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>freq,window;
        for(char c: t) freq[c]++;

        int count = 0, total_count = freq.size();
        int r=0, l=0, minLen = INT_MAX, start=0;
        int n = s.size();
        while(r<n){
            char c = s[r];
            window[c]++;

            if(freq.count(c) && window[c] == freq[c]){
                count++;
            }
            while(count == total_count){
                if (r - l + 1 < minLen) {
                    minLen = r-l+1;
                    start = l;
                }
                char leftchar = s[l];
                window[leftchar]--;
                if(freq.count(leftchar) && window[leftchar] < freq[leftchar]){
                    count--;
                }
                l++;
            }    
            r++;

        }
        return (minLen == INT_MAX) ? "" : s.substr(start, minLen);
    }
};
