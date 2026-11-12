class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        int record = 0;
        int n = operations.size();
        for(int i=0; i<n; i++){
            if(operations[i] == "+"){
                int val1 = st.top();
                st.pop();
                int val2 = st.top();
                st.push(val1);
                st.push(val1 + val2);
                record += (val1 + val2);
            }
            else if(operations[i] == "D"){
                int val = st.top();
                st.push(2*val);
                record += st.top();
            }
            else if(operations[i] == "C"){
                int val = st.top();
                st.pop();
                record -= val;
            }
            else{
                int val = stoi (operations[i]);
                st.push(val);
                record += val;
            }

        }
        return record;
    }
};