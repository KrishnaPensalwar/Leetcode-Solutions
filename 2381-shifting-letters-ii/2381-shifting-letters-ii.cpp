class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n = s.size();
        vector<int> diff(n + 1, 0);
        
       
        for(const auto &shift: shifts) {
            int start = shift[0], end = shift[1], dir = shift[2] ? 1 : -1;
            diff[start] += dir;
            if(end + 1 < n) diff[end + 1] -= dir; 
        }
        
       
        for(int i = 1; i < n; i++) {
            diff[i] += diff[i - 1];
        }
        
       
        for(int i = 0; i < n; i++) {
            int val = (s[i] - 'a' + diff[i]) % 26;
            if(val < 0) val += 26; 
            s[i] = char(val + 'a'); 
        }
        
        return s;
    }
};