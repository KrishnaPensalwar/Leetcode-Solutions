class Solution {
public:
    int minOperations(vector<string>& logs) {

        stack<string> st;
        int i=0;
        int n = logs.size();

        while (i < n) {
    if (logs[i] == "../") {
        if (!st.empty()) {
            st.pop();
        }
        i++;
    } else if (logs[i] == "./") {
        i++;
    } else {
        st.push(logs[i]);
        i++;
    }
}

        int count=0;

        while(!st.empty()){
            st.pop();
            count++;
        }

        return count;
    }
};