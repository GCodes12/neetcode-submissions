class Solution {
public:
    string decodeString(string s) {
        stack<int>numStack;
        stack<string>strStack;

        string curr = "";
        int num = 0;

        for(char c : s){
            if(isdigit(c)){
                num = num * 10 + (c - '0');
            }
            else if(c == '['){
                numStack.push(num);
                strStack.push(curr);
                num = 0;
                curr = "";
            }
            else if(c == ']'){
                string temp = curr;
                curr = strStack.top();
                strStack.pop();
                int repeat = numStack.top();
                numStack.pop();
                while(repeat--){
                    curr += temp;
                }
            }
            else curr += c;
        }
        return curr;
    }
};