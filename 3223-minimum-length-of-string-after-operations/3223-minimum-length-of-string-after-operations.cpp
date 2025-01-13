class Solution {
public:
    int minimumLength(string s) {
        map<char, int> mp;
        int cnt = 0;
        for (int i = 0; i < s.size(); i++)
            mp[s[i]]++;
        for (auto& it : mp) {
            if (it.second % 2 == 1)
                cnt++;
            else if (it.second % 2 == 0)
                cnt += 2;
        }
        return cnt;
    }
};