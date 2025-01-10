class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        map<char, int> mp2;
    vector<string> ans;

    for (string w : words2) {
        map<char, int> temp;
        for (char c : w) {
            temp[c]++;
        }
        for (auto [key, value] : temp) {
            mp2[key] = max(mp2[key], value);
        }
    }

    for (string word : words1) {
        map<char, int> temp;
        for (char c : word) {
            temp[c]++;
        }
        bool flag = true;
        for (auto [key, value] : mp2) {
            if (temp[key] < value) {
                flag = false;
                break;
            }
        }
        if (flag) {
            ans.push_back(word);
        }
    }

    return ans;
    }
};