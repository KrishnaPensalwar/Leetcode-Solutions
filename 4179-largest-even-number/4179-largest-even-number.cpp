class Solution {
public:
    string largestEven(string s) {
        while (!s.empty() && (s.back() - '0') % 2 != 0) {
            s.pop_back();
        }

        return s;
    }
};