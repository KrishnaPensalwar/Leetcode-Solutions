class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        set<int> st;

        for (int num : arr) {
            if (num % 2 == 0) {
                if (st.find(num * 2) != st.end() ||
                    st.find(num / 2) != st.end()) {
                    return true;
                } else {
                    st.insert(num);
                }
            } else {
                if (st.find(num * 2) != st.end()) {
                    return true;
                } else {
                    st.insert(num);
                }
            }
        }
        return false;
    }
};