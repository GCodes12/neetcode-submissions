class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        // int m = s1.size();
        // int n = s2.size();
        
        // if(m > n) return false;
        // vector<int> count1(26, 0), count2(26, 0);

        // for(char c: s1){
        //     count1[c - 'a']++;
        // }

        // for(int i=0; i<m; i++){
        //     count2[s2[i] - 'a']++;
        // }

        // if(count1 == count2) return true;

        // for(int i=m; i<n; i++){
        //     count2[s2[i] - 'a']++;
        //     count2[s2[i-m]-'a']--;

        //     if(count1 == count2) return true;
        // }
        // return false;


        int n = s1.size();
        int m = s2.size();

        if(n>m) return false;
        
        vector<int>count1(26,0);
        vector<int>count2(26,0);

        for(char c : s1){
            count1[c -'a']++;
        }

        for(int i=0; i<n; i++){
            count2[s2[i] - 'a']++;
        }

        if(count1 == count2){
            return true;
        }


        for(int i=n; i<m; i++){
            count2[s2[i]-'a']++;
            count2[s2[i-n]-'a']--;

            if(count1 == count2) return true;
        }
        return false;
    }
};
