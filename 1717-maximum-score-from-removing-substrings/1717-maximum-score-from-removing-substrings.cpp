class Solution {
public:
    int removeba(string s, int x, int y) {
        stack<char> st;
        int ans = 0;

        for (char ch : s) {
            if (ch == 'a' && !st.empty() && st.top() == 'b') {
                st.pop();
                ans += y;
            } else {
                st.push(ch);
            }
        }

        string temp = "";

        while (!st.empty()) {
            temp += st.top();
            st.pop();
        }
        reverse(temp.begin(), temp.end());

        for (char ch : temp) {
            if (ch == 'b' && !st.empty() && st.top() == 'a') {
                st.pop();
                ans += x;
            } else {
                st.push(ch);
            }
        }

        return ans;
    }

    int removeab(string s, int x, int y) {
        stack<char> st;
        int ans = 0;

        for (char ch : s) {
            if (ch == 'b' && !st.empty() && st.top() == 'a') {
                st.pop();
                ans += x;
            } else {
                st.push(ch);
            }
        }

        string temp = "";

        while (!st.empty()) {
            temp += st.top();
            st.pop();
        }
        reverse(temp.begin(), temp.end());

        for (char ch : temp) {
            if (ch == 'a' && !st.empty() && st.top() == 'b') {
                st.pop();
                ans += y;
            } else {
                st.push(ch);
            }
        }

        return ans;
    }

    int maximumGain(string s, int x, int y) {
        if (x > y) {
            return removeab(s, x, y);
        } else {
            return removeba(s, x, y);
        }
    }
};