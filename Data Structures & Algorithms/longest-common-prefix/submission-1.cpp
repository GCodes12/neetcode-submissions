class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // for(int i=0; i<strs[0].length(); i++){
        //     for(const string& s: strs){
        //         if(i == s.length() || s[i] != strs[0][i]){
        //             return s.substr(0,i);
        //         }
        //     }
        // }
        // return strs[0];
        // string ans = "";
        // int n = strs.size();
        // for(int i=0; i<strs[0].length(); i++){
        //     char ch = strs[0][i];

        //     bool match = true;

        //     for(int j=0; j<n; j++){
        //         if(strs[j].size() <= i || ch != strs[j][j]){
        //             match = false;
        //             break;
        //         }
        //     }
        //     if(match == false){
        //         break;
        //     }
        //     else{
        //         ans.push_back(ch);
        //     }
        // }
        // return ans;

        for(int i=0; i<strs[0].length(); i++){

            for(const string& s: strs){

                if(i == s.length() || s[i] != strs[0][i]){
                    return s.substr(0,i);
                }
            }
        }
        return strs[0];
    }
};