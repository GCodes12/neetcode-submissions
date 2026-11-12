class Solution {
public:

    string encode(vector<string>& strs) {
        string s;
        int n = strs.size();
        for(int i=0; i<n; i++){
            s += to_string(strs[i].length()) + '#' + strs[i]; 
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string>str;
        int i=0;
        
        while(i < s.size()){
            
            int j = i;

            while(s[j] != '#'){
                j++;
            }
            int len = stoi(s.substr(i,j-i)); //length
            j++;

            str.push_back(s.substr(j,len));

            i = j + len;
        }
        return str;
    }
};
