class Solution {
public:
    string simplifyPath(string path) {
        string temp;
        vector<string>st;

        stringstream ss(path);

        // split by '/'
        while(getline(ss,temp,'/')){
            if(temp == "" || temp == ".") continue; //skip empty and '.'
            else if(temp == ".."){
                if(!st.empty()) st.pop_back(); // go back one directory
            }
            else st.push_back(temp); //valid directory name.
        }

        string result = "/";
        for(int i=0; i<st.size(); i++){
            result += st[i];
            if(i != st.size()-1) result += "/";
        }
        return result;
    }
};