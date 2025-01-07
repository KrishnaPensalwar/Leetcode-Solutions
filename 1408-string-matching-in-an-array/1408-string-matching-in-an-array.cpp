class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> ans;

        for (int i = 0; i < words.size(); i++) {
            bool find = false;
            for (int j = 0; j < words.size(); j++) {
                if (i != j) {
                    if (words[j].find(words[i])  != string::npos && !find) {
                        ans.push_back(words[i]);
                        cout<<i<<" "<<j<<endl;
                        find = true;
                    }
                }
            }
        }

        return ans;
    }
};