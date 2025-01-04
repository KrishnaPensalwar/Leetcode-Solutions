class Solution {
public:
    int countPalindromicSubsequence(string s) {
        // int i = 0, j = s.length() - 1;
        set<string> st;

        // while (i < j) {
        //     while (s[i] != s[j] && j-i>=3) {
        //         j--;
        //     }
        //     string temp = "";
        //     if (j - i >= 2 && s[i]==s[j]) {
        //         for (int k = i+1; k < j; k++) {
        //             temp += s[i];
        //             temp += s[k];
        //             temp += s[j];
        //             st.insert(temp);
        //             cout<<temp<<endl;
        //             temp = "";
        //         }
        //         // cout<<i<<" "<<j<<endl;
        //     }

        //     i++;
        //     j = s.length() - 1;
        // }

        // for (auto i : st)
        //     cout << i << " " << endl;

        map<char, vector<int>> mp;

        for (int i = 0; i < s.length(); i++) {
            mp[s[i]].push_back(i);
        }

        for (auto i : mp) {
            int minindex = *min_element(i.second.begin(), i.second.end());
            int maxindex = *max_element(i.second.begin(), i.second.end());

            string temp = "";
            for (int j = minindex+1; j < maxindex; j++) {
                temp += s[minindex];
                temp += s[j];
                temp += s[maxindex];
                st.insert(temp);
                temp = "";
            }
        }

        return st.size();
    }
};