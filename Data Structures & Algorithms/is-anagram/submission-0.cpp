class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int,int>mpp;
        int s1 = s.length();
        int s2 = t.length();
        if(s1 != s2) return false;

        for(int i=0; i<s1; i++){
            mpp[s[i]]++;
        }

        for(int i=0; i<s2; i++){
            mpp[t[i]]--;
            if(mpp[t[i]] == 0){
                mpp.erase(t[i]);
            }
        }

        if(mpp.size() > 0) return false;
        else return true;
    }
};
